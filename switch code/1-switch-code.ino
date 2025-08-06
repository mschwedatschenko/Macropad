#include "Keyboard.h"

const int buttonPin = 3;
int prevState = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if(buttonState == LOW && prevState == HIGH)
  {
    Keyboard.press(97);
    delay(50);
  }

  if(buttonState == HIGH && prevState == LOW)
  {
    Keyboard.release(97);
    delay(50);
  }

  prevState = buttonState;
}
