// Demonstrates usage of ESP32MouseTo library(https://github.com/Youngv/ESP32MouseTo).
// Connect pin 10 to ground to start mouse movements between (0, 0) and another point, which will probably not be (450, 0).
// Screen coordinates can be determined by opening the file extras/MousePosition.html included this library in your browser, then press F11 for full screen
// To determine the correction factor, divide 450(the target x coordinate) by the actual screen x coordinate reached and use the result with ESP32MouseTo.setCorrectionFactor().
// Some additional adjustment of the correction factor may be required to get accurate mouse pointer positioning.
// Setting a larger target coordinate will yield a more accurate correction factor.

#if ARDUINO_USB_MODE
#warning This sketch should be used when USB is in OTG mode
void setup(){}
void loop(){}
#else

#include "USB.h"
#include "Esp32MouseTo.h"
USBHIDMouse Mouse;

const int rightButton = 15;

void setup() {
  Mouse.begin();
  USB.begin();
  ESP32MouseTo.setCorrectionFactor(1);
  pinMode(rightButton, INPUT_PULLUP);
}

void loop() {
  while (digitalRead(rightButton) == LOW) {
    ESP32MouseTo.setTarget(0, 0);
    while (ESP32MouseTo.move() == false) {}
    delay(1000);
    ESP32MouseTo.setTarget(450, 0);
    while (ESP32MouseTo.move() == false) {}
    delay(1000);
  }
}

#endif /* ARDUINO_USB_MODE */
