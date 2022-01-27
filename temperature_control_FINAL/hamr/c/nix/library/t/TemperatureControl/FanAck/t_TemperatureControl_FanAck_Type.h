#ifndef SIREUM_H_t_TemperatureControl_FanAck_Type
#define SIREUM_H_t_TemperatureControl_FanAck_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.TemperatureControl.FanAck.Type
void t_TemperatureControl_FanAck_Type_byName(STACK_FRAME Option_C5A124 result, String s);
void t_TemperatureControl_FanAck_Type_byOrdinal(STACK_FRAME Option_C5A124 result, Z n);
Z t_TemperatureControl_FanAck_Type_numOfElements(void);
void t_TemperatureControl_FanAck_Type_cprint(t_TemperatureControl_FanAck_Type this, B isOut);
void t_TemperatureControl_FanAck_Type_string_(STACK_FRAME String result, t_TemperatureControl_FanAck_Type this);

#ifdef __cplusplus
}
#endif

#endif