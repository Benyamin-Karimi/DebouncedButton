#include <DebouncedButton.h>

const int BUTTON_PIN = 2;
DebouncedButton myPrimaryButton(BUTTON_PIN, DebouncedButton::AS_INPUT_PULLUP, 50);

void setup()
{
   Serial.begin(9600);
}

void loop()
{
   if (myPrimaryButton.wasPressed())
   {
      Serial.println("Pressed!");
   }
}