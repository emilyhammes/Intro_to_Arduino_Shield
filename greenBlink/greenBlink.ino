// To make the LED blink, we move the digitalWrite commands from the setup to the loop function.
const int greenLED =  5;
const int GND = 2; 

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (greenLED, OUTPUT);

  //this tells the arduino what state (high or 1, low or 0) to put the pins in
  digitalWrite(GND, 0); 
}

void loop() {
  digitalWrite(greenLED, 1); //turns on the LED
  delay (400); // stops code at this point for a time
  digitalWrite(greenLED, 0); //turns off the LED
  delay (200); // stops code at this point for a time
}
