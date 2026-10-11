#include "../inc/drivers.h"
#include "../inc/adc.h"
#include "../inc/dio.h"
#include "../inc/comm/can_stack.h"
#include "../inc/eeprom.h"
#include "../inc/pwm.h"
#include "../inc/rtc.h"
#include "../inc/slave_mcu.h"
#include "../inc/tim.h"

void drivers_init(){
    adc_init();
    dio_init();
    can_stack_init();
    eeprom_init();
    pwm_init();
    rtc_init();
    slave_mcu_init();
    tim_init();
    watchdog_init();
}

void drivers_process(){
    adc_process();
    dio_process();
    eeprom_process();
    can_stack_process();
    pwm_process();
    rtc_process();
    slave_mcu_process();
    tim_process();
}
