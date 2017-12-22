// To make the LED blink orange, we take the yellowBlink code and modify it.
// Orange has less green than yellow so we need to use Pulse Width Modulation (PWM)
// PWM causes the pin to switch between high and low very fast.
// The result is that the Green LED looks dimmer. 
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
  digitalWrite(redLED, 1); //turns on the LED
  analogWrite(greenLED, 30); //blinks the LED faster than we can see it.
  // the analogWrite command can vary from 255 to 0, 255 being brightest. 
  delay (500); // stops code at this point for a time
  digitalWrite(redLED, 0); //turns off the LED
  analogWrite(greenLED, 0); //turns off the LED using PWM  
  delay (100); // stops code at this point for a time
}
