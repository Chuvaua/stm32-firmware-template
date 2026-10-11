#ifndef PROJECT_TIMING_H
#define PROJECT_TIMING_H




#define PROJECT_PROCESS_PERIOD_US  (200u) // время периода тика процесса.












#define MS_TO_TICK_PROCESS(x)				((x * 1000u) / PROJECT_PROCESS_PERIOD_US)
#define SEC_TO_TICK_PROCESS(x)			(MS_TO_TICK_PROCESS(x * 1000))







#endif // PROJECT_TIMING_H
