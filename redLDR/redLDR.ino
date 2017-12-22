const int redLED = 6;
const int GND = 2;
const int VCC =  A1;
const int LDR =  A0;
int val; // number used in calculations
const int MIN_Light = 50;   //Minimum expected light value
const int MAX_Light = 500;    //Maximum Expected Light value

void setup() {
  pinMode (GND, OUTPUT);
  pinMode (VCC, OUTPUT);
  pinMode (redLED, OUTPUT);
  pinMode (LDR, INPUT); // Set LDR to an input
  digitalWrite (GND, 0);
  digitalWrite (VCC, 1);
}

void loop() {
  val = analogRead(LDR);
  val = map(val, MIN_Light, MAX_Light, 255, 0);
  val = constrain(val, 0, 255);
  analogWrite(redLED, val);
}
