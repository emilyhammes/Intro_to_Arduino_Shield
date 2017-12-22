// PWM can also be used to make LEDs fade on and off

const int redLED =  6;
const int GND = 2; 
int brightness = 0;// brightness will change while the code is running so it is not a constant
int change=1; // the amount that the brightness will change by in each loop

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (redLED, OUTPUT);

  //this tells the arduino what state (high or 1, low or 0) to put the pins in
  digitalWrite(GND, 0); 
}

void loop() {
  analogWrite(redLED, brightness); //sets the brightness of the red LED
  delay (5);
  brightness=brightness+change; // calculate the next brightness 
  if (brightness >255 || brightness < 0){
    change=-1*change; //change sign of brightness increase or decrease brightness
    brightness=brightness+2*change; // calculate the next brightness 
  }
}
