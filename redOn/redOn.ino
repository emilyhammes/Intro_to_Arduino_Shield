// This code turns on the red LED by setting pin 6 to high and pin 2 to low.

// At the top of the program global variables are defined
const int redLED = 6; // This is a constant integer. 
const int GND = 2; // It is good to define the pins as constants because we do not accidentally want to reassign them in the code.

// Every Arduino code has a setup function. These instructions are executed one time.
void setup() {
  //this tells the Arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (redLED, OUTPUT);

  // This tells the Arduino what state (high or low) to put the pins in
  digitalWrite(GND, LOW); 
  digitalWrite(redLED, HIGH); 
}

// Every Arduino code also has a loop function. This is executed after the setup and runs forever.
void loop() {
// The loop is empty in this program because we always want the red light to be on. 
// However, we need to include a loop function so we include it but leave it empty.
}

/* Lastly, comments are notes written by the programmer to explain what the code is doing.
   In the Arduino IDE they look grey. They are not executed by the program. 
   In a single line they can be made by typing //. This is an example of a multiline comment.
*/


