int blueLED = 3; 
int GND = 2; 
int brightness = 255;

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (blueLED, OUTPUT);

  //this tells the arduino what state (high or low) to put the pins in
  digitalWrite(GND, 0); 
}

void loop() {
    analogWrite(blueLED, 255-brightness); 
    delay(brightness);
    brightness=brightness-5;
    if (brightness < 0){
        brightness=255;
    }
}
