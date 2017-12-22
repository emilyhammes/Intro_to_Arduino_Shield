//Buttons are digital inputs: they are high or low but no middle states. 
//In the Intro to Arduino Shield I use an internal pullup. This is a resistor 
//in the arduino's microcontroller. For more information on how this works watch
//my Buttons Tactiles and Switches! video. 

const int blueLED = 3;
const int GND = 2;
const int button =  4;

void setup() {
  pinMode (GND, OUTPUT);
  pinMode (blueLED, OUTPUT);
  pinMode (button, INPUT_PULLUP);// this tells the arduino to use the internal pullup resistor
  
  digitalWrite (GND,0);
}

void loop() {
  // This is an if else statement 
  // To use it we need to catagorize things into distinct groups
  // In this case the button is either high or low. 
  // The last group is always all the cases not covered by the previous if statement(s).
  
  if (digitalRead(button) == HIGH) { // if the button pin senses a high voltage...
    analogWrite(blueLED, 20); // we turn on the blue LED
  }
  else{ // if the button senses a low voltage...
    digitalWrite(blueLED, 0); // we turn off the blue LED
  }
}
