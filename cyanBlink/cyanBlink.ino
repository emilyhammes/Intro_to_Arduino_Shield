// To make the LED blink cyan, we blink both green and blue together.
const int blueLED =  3;
const int greenLED =  5;
const int GND = 2; 

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (blueLED, OUTPUT);
  pinMode (greenLED, OUTPUT);

  //this tells the arduino what state (high or 1, low or 0) to put the pins in
  digitalWrite(GND, 0); 
}

void loop() {
  analogWrite(blueLED, 10); //turns on the LED
  analogWrite(greenLED, 10);  
  delay (300); // stops code at this point for a time
  digitalWrite(blueLED, 0); //turns off the LED
  digitalWrite(greenLED, 0); 
  delay (300); // stops code at this point for a time
}
