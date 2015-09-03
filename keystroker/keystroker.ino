//Presses backspace then space every 30 seconds, by Dehyrf for your amusement under GNU GPL v3
//To turn on, connect a wire between gnd and digital 4. To turn off/reprogram, disconnect wire.

const int buttonPin = 4;          // input pin for pushbutton
int counter = 0;                  // button push counter

void setup() {
  // make the pushButton pin an input:
  pinMode(buttonPin, INPUT_PULLUP);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // read the pushbutton:
  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) {
    Keyboard.write(8);
    Keyboard.releaseAll();
    Keyboard.write(' ');
    Keyboard.releaseAll();
    delay(30000);
  }
}

