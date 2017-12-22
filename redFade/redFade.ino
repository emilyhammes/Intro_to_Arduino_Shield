int redLED = 6; 
int GND = 2; 
int brightness = 0;

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (redLED, OUTPUT);

  //this tells the arduino what state (high or low) to put the pins in
  digitalWrite(GND, LOW); 
  digitalWrite(redLED, HIGH); 
}

void loop() {
    analogWrite(redLED, brightness); 
    delay(10);
    brightness++;
    if (brightness >255){
        brightness=0;
    }
}
