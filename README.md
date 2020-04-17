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
Do not connect the 5V arduino output directly to a raspberry pi! Doing so can damage your pi! The raspberry pi accepcts 3.3v digital input only, so you will need a voltage divider or level shifter to convert the 5V arduino digital output to 3.3V raspberry pi digital input.

### Materials
* Arduino Uno
* USB A-to-B cable to program arduino
* 9V power supply for arduino (if you want to operate the arduino without being plugged into a USB port)
* Momentary push button switch, normally-open, with wire leads attached
* 2.5mm female plug, with leads attached

### Assembly Instructions
1. Upload the .ino sketch to the arduino (if you're new to arduino, see instrutions on using arduino in our [other arduino repo](https://github.com/Open-Ventilator-Remote-Monitoring/ventilator-monitor-arduino))
2. Plug one end of the momentary pushbutton switch to Digital Pin 2 on the Arduino and the other end into Ground.
3. Plug the positive (+) lead of the 2.5mm female plug into Digital Pin 4 on the Arduino and the other end into Ground.
4. If you would like to unplug the arudino from your computer, plug the arduino into a 9V power supply.

![](https://docs.google.com/drawings/d/e/2PACX-1vTtNRXXeI7sxIY4pXzvwKMqbqTzeGbPxXdAW8kaVW1fzQigo8KpEpGfEJwbLxpcyRaiFk0BWMGybxHD/pub?w=960&h=720)

### Operation
1. Plug the arduino into a power supply
2. Observe that the built-in LED is illuminated. If desired, verify with a voltmeter that the output voltage from the 2.5mm jack is 5V.
3. Push and hold the button. Observer that the built-in LED is OFF. If desired, verify with a voltmeter that the output voltage from the 2.5mm jack is 0V.

