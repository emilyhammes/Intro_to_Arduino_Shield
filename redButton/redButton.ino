const int redLED = 6;
const int GND = 2;
const int button =  4;

void setup() {
  pinMode (GND, OUTPUT);
  pinMode (redLED, OUTPUT);
  pinMode (button, INPUT_PULLUP);// this tells the arduino to use the internal pullup resistor
  
  digitalWrite (GND,0);
}

void loop() {
// here we turn on the led if the button is pushed (this is the opposite of blueButton
  if ( digitalRead(button) == 1) { // if the button pin senses a high voltage (1)...
    digitalWrite(redLED, 0); // we turn off the red LED
  }
  else{ // if the button senses a low voltage (0)...
    analogWrite(redLED, 20); // we turn on the red LED
  }
}
