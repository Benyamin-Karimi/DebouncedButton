# Debounced Button
DebouncedButton is a lightweight class for eliminating button bounce in **Arduino** projects. By simply creating an instance of this class, you can handle button states without manually implementing debounce logic.

## 🎯 Features:
- Customizable pin assignment

- Supports both `INPUT` and `INPUT_PULLUP` modes

- Adjustable debounce delay

- Compatible with **Arduino IDE**, **PlatformIO**, and **VS Code** (with PlatformIO extension)

## 🧪 Example Usage:

```cpp
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
```

## License
[MIT License](./LICENSE)
