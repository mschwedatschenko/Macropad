#include <Keypad.h>
#include <Keyboard.h>

const byte row = 3;
const byte col = 3;

char matrix[row][col] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'}
};

byte rowPins[row] = {6,7,9};
byte colPins[col] = {3,4,5};


Keypad keypad = Keypad(makeKeymap(matrix), rowPins, colPins, row, col);

void setup(){
  Keyboard.begin();
}

void loop(){
  char key = keypad.getKey();

  if(key){
    Keyboard.write(key);
    delay(100);
  }
}
