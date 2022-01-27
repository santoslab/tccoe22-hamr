#ifndef SIREUM_H_art_art_Port_0A16CC
#define SIREUM_H_art_art_Port_0A16CC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[t.TemperatureControl.FanAck.Type]

#define art_Port_0A16CC_id_(this) ((this)->id)
#define art_Port_0A16CC_name_(this) ((String) &(this)->name)
#define art_Port_0A16CC_mode_(this) ((this)->mode)

B art_Port_0A16CC__eq(art_Port_0A16CC this, art_Port_0A16CC other);
inline B art_Port_0A16CC__ne(art_Port_0A16CC this, art_Port_0A16CC other) {
  return !art_Port_0A16CC__eq(this, other);
};
void art_Port_0A16CC_string_(STACK_FRAME String result, art_Port_0A16CC this);
void art_Port_0A16CC_cprint(art_Port_0A16CC this, B isOut);

inline B art_Port_0A16CC__is(STACK_FRAME void* this) {
  return ((art_Port_0A16CC) this)->type == Tart_Port_0A16CC;
}

inline art_Port_0A16CC art_Port_0A16CC__as(STACK_FRAME void *this) {
  if (art_Port_0A16CC__is(CALLER this)) return (art_Port_0A16CC) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[t.TemperatureControl.FanAck.Type].");
  abort();
}

void art_Port_0A16CC_apply(STACK_FRAME art_Port_0A16CC this, Z id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif