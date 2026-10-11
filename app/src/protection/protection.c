#include "../../inc/protection.h"
#include "protection_priv.h"

void protection_init(){
    prot_current_init();
    prot_voltage_init();
}

void protection_process(){
    prot_current_process();
    prot_volt_process();
}
