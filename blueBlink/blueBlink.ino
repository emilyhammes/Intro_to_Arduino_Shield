// To make the LED blink, we move the digitalWrite commands from the setup to the loop function.
const int blueLED = 3;
const int GND = 2; 

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (blueLED, OUTPUT);

  //this tells the arduino what state (high or 1, low or 0) to put the pins in
  digitalWrite(GND, 0); 
}

void loop() {
  digitalWrite(blueLED, 1); //turns on the LED
  delay (900); // stops code at this point for a time
  digitalWrite(blueLED, 0); //turns off the LED
  delay (100); // stops code at this point for a time
}
