//If you need the arduino to do two things but you are not sure which happens when, then you need to use a nonblocking state machiene
//Here red blinks at an interval of rTime and blue blinks at an interval of bTime

const int redLED = 6;
const int blueLED = 3;
const int GND = 2;
const int rTime=800;
const int bTime=650;
unsigned long redTime = millis();
unsigned long blueTime = millis();

void setup() {
  Serial.begin(9600);
  pinMode (GND, OUTPUT);
  pinMode (redLED, OUTPUT);
  pinMode (blueLED, OUTPUT);
  digitalWrite (GND,0);
}

void blueOn() {
    analogWrite(blueLED, 20); // we turn on the blue LED
    analogWrite(redLED, 0); // we turn off the red LED
    Serial.println(redTime);
  }  
  
void redOn() {
    analogWrite(blueLED, 0); // we turn off the blue LED
    analogWrite(redLED, 20); // we turn on the red LED
    Serial.println(blueTime);
  }

void loop() {
// Here we make a state macheine. All it does is check to see if time has passed
if (millis() >redTime){  
 redOn();
 redTime=millis()+rTime;
}

if (millis() > blueTime){
  blueOn();
  blueTime=millis()+bTime;
}
}
