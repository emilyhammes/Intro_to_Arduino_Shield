// To make the LED switch between green and white we leave green on all the time
// and turn on and off red and blue at the same time (R+G+B=white)
const int blueLED = 3;
const int greenLED = 5;
const int redLED = 6;
const int GND = 2; 

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (blueLED, OUTPUT);
  pinMode (greenLED, OUTPUT);
  pinMode (redLED, OUTPUT);

  //this tells the arduino what state (high or 1, low or 0) to put the pins in
  digitalWrite(GND, 0); 
  analogWrite(greenLED, 200); 
}

void loop() {

  analogWrite(blueLED, 150); //turns on the LED
  digitalWrite(redLED, 1);  
  delay (300); // stops code at this point for a time
  digitalWrite(blueLED, 0); //turns off the LED
  digitalWrite(redLED, 0); 
  delay (200); // stops code at this point for a time
}
