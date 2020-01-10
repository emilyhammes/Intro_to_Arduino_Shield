//test ldr values using serial print

const int LIGHT=A0;          //Lght Sensor on Analog Pin 0
const int BUTTON=4;          //The Button is connected to pin 2
const int RLED=6;            //Red LED on pin 6 (PWM)
const int GLED=5;            //Green LED on Pin 5 (PWM)
const int BLED=3;            //blue LED on Pin 3 (PWM)
const int Vcc=A1;            //set to high
const int GND=2;             //set to low

const int MIN_LIGHT=50;     //Minimum expected light value
const int MAX_LIGHT=500;      //Maximum Expected Light value
int val = 0;                 //variable to hold the analog reading


boolean lastButton = LOW;    //Last Button State
boolean currentButton = LOW; //Current Button State          //Cycle between LED states
float rval = 1;
float bval = 1;
float gval = 1;

void setup()
{
  pinMode (BLED, OUTPUT);   //Set Blue LED as Output
  pinMode (GLED, OUTPUT);   //Set Green LED as Output
  pinMode (RLED, OUTPUT);   //Set Red LED as Output
  pinMode (BUTTON, INPUT_PULLUP);  //Set button as input with internal pullup resistor 
  pinMode (LIGHT, INPUT); // Set LDR to an input
  pinMode (GND, OUTPUT);  // Set Ground pin to output
  digitalWrite(GND, LOW);   // Set Ground pin to low
  pinMode (Vcc, OUTPUT);  // Set Voltage pin to output
  digitalWrite(Vcc, HIGH);   // Set Voltage pin to high
  Serial.begin(9600);

}

void loop()
{
  
  
  val = analogRead(LIGHT);                      //read the light sensor
  Serial.println(val);
  val = map(val, MIN_LIGHT, MAX_LIGHT, 255, 0); //map the light reading
  Serial.println(val);
  val = constrain(val, 0, 255);                 //constrain light value 
  Serial.println(val);
  analogWrite(RLED, val * rval);                       //control the LED
  analogWrite(BLED, val * bval);                       //control the LED    
  analogWrite(GLED, val * gval);                       //control the LED
  Serial.println();
  delay(1000);


}
