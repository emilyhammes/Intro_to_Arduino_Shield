// To make the LED blink purple, we blink both red and blue together.
const int blueLED =  3;
const int redLED =  6;
const int GND = 2; 

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (blueLED, OUTPUT);
  pinMode (redLED, OUTPUT);

  //this tells the arduino what state (high or 1, low or 0) to put the pins in
  digitalWrite(GND, 0); 
}

void loop() {
  analogWrite(blueLED, 10); //turns on the LED
  analogWrite(redLED, 20);  
  delay (300); // stops code at this point for a time
  digitalWrite(blueLED, 0); //turns off the LED
  digitalWrite(redLED, 0); 
  delay (200); // stops code at this point for a time
}
