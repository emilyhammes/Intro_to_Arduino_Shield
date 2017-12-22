// Yellow is made by turning on the red and green leds at the same time

const int greenLED = 5; 
const int redLED =  6;
const int GND = 2; 

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (greenLED, OUTPUT);
  pinMode (redLED, OUTPUT);

  //this tells the arduino what state (high or 1, low or 0) to put the pins in
  digitalWrite(GND, 0); 
  digitalWrite(greenLED, 1); 
  digitalWrite(redLED, 1); 
}

void loop() {
}
