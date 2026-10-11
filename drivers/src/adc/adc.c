#include "../../inc/adc.h"
#include "adc_priv.h"

void adc_init(){
    adc_filter_init();
    adc_scaling_init();
}

void adc_process(){
    adc_filter_process();
    adc_scaling_process();
}
