#include "DebouncedButton.h"

DebouncedButton::DebouncedButton(int pinNumber, Mode mode, unsigned long delay)
{
   pin = pinNumber;
   debounceDelay = delay;
   lastState = HIGH;
   confirmedState = HIGH;
   lastDebounceTime = 0;
   pinMode(pin, mode);
}

bool DebouncedButton::wasPressed()
{
   bool currentState = digitalRead(pin);

   if (currentState != lastState)
   {
      lastDebounceTime = millis();
      lastState = currentState;
   }

   if ((millis() - lastDebounceTime) > debounceDelay)
   {
      if (currentState != confirmedState)
      {
         confirmedState = currentState;
         if (confirmedState == LOW)
         {
            return true;
         }
      }
   }

   return false;
}
