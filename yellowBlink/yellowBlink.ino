// To make the LED blink yellow, we blink the red and green LEDs together
const int redLED =  6;
const int greenLED =  5;
const int GND = 2; 

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (redLED, OUTPUT);
  pinMode (greenLED, OUTPUT);

  //this tells the arduino what state (high or 1, low or 0) to put the pins in
  digitalWrite(GND, 0); 
}

void loop() {
  analogWrite(redLED, 40); //turns on the LED
analogWrite(greenLED, 5);  
  delay (500); // stops code at this point for a time
  digitalWrite(redLED, 0); //turns off the LED
analogWrite(greenLED, 0); 
  delay (100); // stops code at this point for a time
}
