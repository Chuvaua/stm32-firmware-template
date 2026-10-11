#ifndef APP_SRC_CONTROL_CONTROL_PRIV_H
#define APP_SRC_CONTROL_CONTROL_PRIV_H

void input_stage_init();
void dcdc_init();
void inverter_init();
void balancing_init();
void input_stage_process();
void dcdc_process();
void inverter_process();
void balancing_process();

#endif /* APP_SRC_CONTROL_CONTROL_PRIV_H */
