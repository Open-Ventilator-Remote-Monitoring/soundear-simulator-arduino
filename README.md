## Soundear 3 Simulator for Arduino
This sketch simulates the Soundbuster output (2.5mm plug) of a Soundear 3 Sound Monitor.

Note: All pinouts are designated for an Arduino Uno.

### Soundear Operation
The Soundbuster output is normally high (digital 5V). When an alarm is sounded, the Soundbuster output turns low (digital OV)

### Arduino Uno Inputs & Outputs
Inputs: Normally open momentary button attached to Pin 2 and Ground
Outputs: Female 2.5mm plug connected attached to Pin 2 and Ground

### Operation
- When the button is released, the output voltage on the simulated 2.5mm soundbuster output reads 5V high
- When the button is pressed, the output voltage on the simulated 2.5mm soundbuster output reads 5V low
- The built-in LED is illuminated when the soundbuster output is 5V high, the LED is turned off otherwise

### Warning
Do not connect the 5V arduino output directly to a raspberry pi! Doint so can damage your pi! The raspberry pi accepcts 3.3v digital input only, so you will need a voltage divider or level shifter to convert the 5V arduino digital output to 3.3V raspberry pi digital input.

### Materials
* Arduino Uno
* USB A-to-B cable to program arduino
* 9V power supply for arduino (if you want to operate the arduino without being plugged into a USB port)
* Momentary push button switch, normally-open, with wire leads attached
* 2.5mm female plug, with leads attached

