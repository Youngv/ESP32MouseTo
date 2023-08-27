// ESP32MouseTo - Library for Arduino Leonardo/Micro for moving the mouse pointer to absolute screen coordinates: https://github.com/Youngv/ESP32MouseTo
#ifndef ESP32MouseTo_h
#define ESP32MouseTo_h

#include <Arduino.h>
#include <USBHIDMouse.h>

class ESP32MouseToClass {
  public:
    ESP32MouseToClass();
    void setTarget(const int targetXinput, const int targetYinput, const boolean homeFirst = true);
    int getTargetX();
    int getTargetY();
    boolean moveTo(const int targetXinput, const int targetYinput);
    boolean move();
    void setScreenResolution(const int x, const int y);
    unsigned int getScreenResolutionX();
    unsigned int getScreenResolutionY();
    void setCorrectionFactor(const float correctionFactorInput);
    float getCorrectionFactor();
    void setMaxJump(const int8_t jumpDistanceInput);
    int8_t getMaxJump();
    void home();
  private:
    int targetX;
    int targetY;
    int positionX;
    int positionY;
    boolean homed;
    int screenResolutionX;
    int screenResolutionY;
    float correctionFactor;
    int8_t jumpDistance;
    boolean moveAxisX;
};
extern ESP32MouseToClass ESP32MouseTo;  //declare the class so it doesn't have to be done in the sketch
#endif  //ESP32MouseTo_h
