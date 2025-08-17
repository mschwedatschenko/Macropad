const byte row = 3;
const byte col = 3;

byte rowPins[row] = {3, 4, 5};
byte colPins[col] = {6, 7, 9};

void setup() {
  Serial.begin(9600);
  
  for (byte r = 0; r < row; r++) {
    pinMode(rowPins[r], OUTPUT);
    digitalWrite(rowPins[r], HIGH); // default to high when not pressed
  }
  
  for (byte c = 0; c < col; c++) {
    pinMode(colPins[c], INPUT_PULLUP);
  }
}

void loop() {
  for (byte r = 0; r < row; r++) {
    // activates one row at a time
    digitalWrite(rowPins[r], LOW);
    
    for (byte c = 0; c < col; c++) {
      if (digitalRead(colPins[c]) == LOW) {
        Serial.print("Key Pressed: R");
        Serial.print(r);
        Serial.print(" C");
        Serial.println(c);
      }
    }
    
    digitalWrite(rowPins[r], HIGH);
  }
  
  delay(50);
}



