#include "../inc/app.h"
#include "../../bsp/inc/bsp.h"
#include "../../drivers/inc/drivers.h"
#include "../inc/control.h"
#include "../inc/diagnostics.h"
#include "../inc/fault_log.h"
#include "../inc/protection.h"
#include "../inc/state_machine.h"
#include "../inc/services.h"
#include "../inc/param_service.h"

void app_init(){
    bsp_init();

    drivers_init();

    param_service_init();
    control_init();
    diagnostics_init();
    fault_log_init();
    protection_init();
    state_mashine_init();
    status_processing_init();
    telemetry_can_init();
    display_info_init();
}

void app_process(){
    drivers_process();

    param_service_process();
    state_mashine_process();
    control_process();
    diagnostics_process();
    fault_log_process();
    protection_process();
    status_processing_process();
    telemetry_can_process();
    display_info_process();
}
