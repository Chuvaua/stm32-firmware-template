#include "../inc/bsp.h"
#include "../inc/bsp_adc.h"
#include "../inc/bsp_cordic.h"
#include "../inc/bsp_fdcan.h"
#include "../inc/bsp_flash.h"
#include "../inc/bsp_gpio.h"
#include "../inc/bsp_iwdg.h"
#include "../inc/bsp_pwm.h"
#include "../inc/bsp_spi.h"
#include "../inc/bsp_tim.h"

void bsp_init(){
    bsp_dma_init();
    bsp_gpio_init();
    bsp_adc_init();
    bsp_cordic_init();
    bsp_fdcan_init();
    Api_Flash_Init();
    bsp_pwm_init();
    bsp_spi_init();
    bsp_tim_init();
    bsp_iwdg_init();
}
