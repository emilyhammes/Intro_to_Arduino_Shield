const int greenLED = 5; 
const int GND = 2; 

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (greenLED, OUTPUT);

  //this tells the arduino what state (high or 1, low or 0) to put the pins in
  digitalWrite(GND, 0); //in the red example this was "LOW" and not 0
  digitalWrite(greenLED, 1); // in the red example the LED was "HIGH" and not 1
}

void loop() {
}
