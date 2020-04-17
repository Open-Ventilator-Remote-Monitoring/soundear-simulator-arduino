/*
Soundear Simulator
Open Ventilator Remote Monitor Project
License: GNU GPL v.30
--------------------------------------------------------------------------------------

This sketch simulates the Soundbuster output (2.5mm plug) of a Soundear 3 Sound Monitor

The Soundbuster output is normally high (digital 5V)
When an alarm is sounded, the Soundbuster output turns low (digital OV)

Inputs: Normally open momentary button attached to Pin 2 and Ground
Outputs: Female 2.5mm plug connected attached to Pin 2 and Ground

Operation:
- When the button is released, the output voltage on the simulated 2.5mm soundbuster output reads 5V high
- When the button is pressed, the output voltage on the simulated 2.5mm soundbuster output reads 5V low
- The built-in LED is illuminated when the soundbuster output is 5V high, the LED is turned off otherwise

*** Warning ***
Do not connect the 5V arduino output directly to a raspberry pi! Doint so can damage your pi!
The raspberry pi accepcts 3.3v digital input only, so you will need a voltage divider or level shifter
  to convert the 5V arduino digital output to 3.3V raspberry pi digital input.

*/

int pushButton = 2;    // Pushbutton Input
int soundBuster = 4;   // Soundbuster Output

void setup() {
  // initialize serial communication at 9600 bits per second (for debug):
  //Serial.begin(9600);
  
  // Make the pushbutton's pin an input.
  // Enable the internal pull-up resistor on this pin to so we don't have a floating voltage
  pinMode(pushButton, INPUT_PULLUP);
  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // Intialize digital pin soundBuster at output
  pinMode(soundBuster, OUTPUT);

}

void loop() {
  // read the state of the pushButtom
  int buttonState = digitalRead(pushButton);
  // print out the state of the button (for debug):
  //Serial.println(buttonState);
  if (buttonState == 1) {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(soundBuster, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW    
    digitalWrite(soundBuster, LOW);
  }
  delay(1);        // delay in between reads for stability
}
