#ifndef TEMPCONTROL_I_TCP_TEMPCONTROL_H
#define TEMPCONTROL_I_TCP_TEMPCONTROL_H

#include <all.h>

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_initialise_(STACK_FRAME_ONLY);

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_finalise_(STACK_FRAME_ONLY);

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_fanAck_(
  STACK_FRAME
  t_TemperatureControl_FanAck_Type value);

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_setPoint_(
  STACK_FRAME
  t_TemperatureControl_SetPoint_i value);

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_tempChanged_(STACK_FRAME_ONLY);

#endif
