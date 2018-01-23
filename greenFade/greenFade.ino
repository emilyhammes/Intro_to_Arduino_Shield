int greenLED = 5; 
int GND = 2; 
int brightness = 50;

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (greenLED, OUTPUT);

  //this tells the arduino what state (high or low) to put the pins in
  digitalWrite(GND, 0); 
}

void loop() {
    analogWrite(greenLED, brightness); 
    delay(200-brightness);
    brightness--;//brightness=brightness-1;
    if (brightness < 0){
        brightness=50;
    }
}
