// Demonstrates the effect of different ESP32MouseTo.setMaxJump() settings.

#if ARDUINO_USB_MODE
#warning This sketch should be used when USB is in OTG mode
void setup(){}
void loop(){}
#else

#include "USB.h"
#include "Esp32MouseTo.h"
USBHIDMouse Mouse;

#if ARDUINO_USB_CDC_ON_BOOT
#define HWSerial Serial0
#define USBSerial Serial
#else
#define HWSerial Serial
USBCDC USBSerial;
#endif

const int rightButton = 15;
byte maxJump;

void setup() {
  USBSerial.begin(9600);
  Mouse.begin();
  USB.begin();
  pinMode(rightButton, INPUT_PULLUP);
  ESP32MouseTo.setTarget(400, 400);
}

void loop() {
  while (digitalRead(rightButton) == LOW) {
    maxJump++;
    if (maxJump == 128) {
      maxJump = 1;
    }
    USBSerial.print(F("maxJump="));
    USBSerial.println(maxJump);
    ESP32MouseTo.setMaxJump(maxJump);
    while (ESP32MouseTo.move() == false) {}
    delay(3000);
    ESP32MouseTo.home();
  }
}

#endif /* ARDUINO_USB_MODE */
