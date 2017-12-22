//Automatic Night Light

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
boolean currentButton = LOW; //Current Button State
int ledMode = 6;             //Cycle between LED states
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
   // Serial.begin(9600);

}

/*
* Debouncing Function
* Pass it the previous button state,
* and get back the current debounced button state.
*/
boolean debounce(boolean last)
{
  boolean current = digitalRead(BUTTON);       //Read the button state
  if (last != current)                         //if it's different...
  {
    delay(5);                                  //wait 5ms
    current = digitalRead(BUTTON);             //read it again
  }
  return current;                              //return the current value
}

/*
* LED Mode Selection
* Pass a number for the LED state and set it accordingly
*/
int  setMode(int mode)
{
  //RED
  if (mode == 1)
  {
    rval=1;
    gval=0;
    bval=0;
  }
  //GREEN
  else if (mode == 2)
  {
    rval=0;
    gval=1;
    bval=0;
  }
  //BLUE
  else if (mode == 3)
  {
    rval=0;
    gval=0;
    bval=1;
  }
  //PURPLE (RED+BLUE)
  else if (mode == 4)
  {
    rval=.5;
    gval=0;
    bval=.5;
  }
  //TEAL (BLUE+GREEN)
  else if (mode == 5)
  {
    rval=0;
    gval=.5;
    bval=.5;
  }
  //ORANGE (GREEN+RED)
  else if (mode == 6)
  {
    rval=.5;
    gval=.5;
    bval=0;
  }
  //WHITE (GREEN+RED+BLUE)
  else if (mode == 7)
  {
    rval=.33;
    gval=.33;
    bval=.33;
  }
  //OFF (mode = 0)
  else
  {
    rval=0;
    gval=0;
    bval=0;
  }
}
void loop()
{
  currentButton = debounce(lastButton);           //read debounced state
  if (lastButton == LOW && currentButton == HIGH) //if it was pressed...
  {
    ledMode++;                                    //increment the LED value
  }
  lastButton = currentButton;                     //reset button value
  //if you’ve cycled through the different options, reset the counter to 0
  if (ledMode == 8) ledMode = 0;
  setMode(ledMode);                              //change the LED state
  
  
  val = analogRead(LIGHT);                      //read the light sensor
  val = map(val, MIN_LIGHT, MAX_LIGHT, 255, 0); //map the light reading
  val = constrain(val, 0, 255);                 //constrain light value
  analogWrite(RLED, val * rval);                       //control the LED
  analogWrite(BLED, val * bval);                       //control the LED    
  analogWrite(GLED, val * gval);                       //control the LED


}

