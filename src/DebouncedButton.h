#ifndef DEBOUNCEDBUTTON_H
#define DEBOUNCEDBUTTON_H

#include <Arduino.h>

class DebouncedButton
{

public:
   enum Mode
   {
      AS_INPUT_MODE = INPUT,
      AS_INPUT_PULLUP = INPUT_PULLUP
   };
   DebouncedButton(int pinNumber, Mode mode = AS_INPUT_PULLUP, unsigned long delay = 50);
   bool wasPressed();

private:
   int pin;
   bool lastState;
   bool confirmedState;
   unsigned long debounceDelay;
   unsigned long lastDebounceTime;
};

#endif
