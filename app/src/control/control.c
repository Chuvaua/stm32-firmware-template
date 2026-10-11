#include "../../inc/control.h"
#include "control_priv.h"

void control_init(){
    input_stage_init();
    dcdc_init();
    inverter_init();
    balancing_init();
}

void control_process(){
    input_stage_process();
    dcdc_process();
    inverter_process();
    balancing_process();
}
