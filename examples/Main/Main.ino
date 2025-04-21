#include <DebouncedButton.h>

int counter = 1;
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
      Serial.println("Primary button pressed for the " + String(counter) + " time.");
      counter++;
   }
}