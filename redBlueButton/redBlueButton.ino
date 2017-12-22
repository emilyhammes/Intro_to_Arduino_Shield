//Here red is on when the button is pushed, otherwise the LED is blue. 

const int redLED = 6;
const int blueLED = 3;
const int GND = 2;
const int button =  4;

void setup() {
  pinMode (GND, OUTPUT);
  pinMode (redLED, OUTPUT);
  pinMode (blueLED, OUTPUT);
  pinMode (button, INPUT_PULLUP);// this tells the arduino to use the internal pullup resistor
  
  digitalWrite (GND,0);
}

void loop() {
// here we turn on the led if the button is pushed (this is the opposite of blueButton
  if ( digitalRead(button) == HIGH) { // if the button pin senses a high voltage...
    analogWrite(blueLED, 20); // we turn on the blue LED
    analogWrite(redLED, 0); // we turn off the red LED
  }
  else{ // if the button senses a low voltage...
    analogWrite(blueLED, 0); // we turn off the blue LED
    analogWrite(redLED, 20); // we turn on the red LED
  }
}
