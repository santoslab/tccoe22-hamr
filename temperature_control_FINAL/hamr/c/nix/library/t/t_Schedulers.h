#ifndef SIREUM_H_t_Schedulers
#define SIREUM_H_t_Schedulers

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void t_Schedulers_init(STACK_FRAME_ONLY);

t_ProcessorTimingProperties t_Schedulers_TempControlSystem_i_Instance_t_processor_timingProperties(STACK_FRAME_ONLY);
t_ThreadTimingProperties t_Schedulers_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties(STACK_FRAME_ONLY);
t_ThreadTimingProperties t_Schedulers_TempControlSystem_i_Instance_tcp_tempControl_timingProperties(STACK_FRAME_ONLY);
t_ThreadTimingProperties t_Schedulers_TempControlSystem_i_Instance_fp_fan_timingProperties(STACK_FRAME_ONLY);

void t_Schedulers_init_TempControlSystem_i_Instance_t_processor_timingProperties(STACK_FRAME_ONLY);

void t_Schedulers_init_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties(STACK_FRAME_ONLY);

void t_Schedulers_init_TempControlSystem_i_Instance_tcp_tempControl_timingProperties(STACK_FRAME_ONLY);

void t_Schedulers_init_TempControlSystem_i_Instance_fp_fan_timingProperties(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif