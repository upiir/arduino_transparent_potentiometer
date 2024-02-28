// simple project using Arduino UNO R3 and two transparent potentiometers with LEDs below them
// turning the potentiometers will set the brightness of the LEDs

// created by upir, 2024
// youtube channel: https://www.youtube.com/upir_upir

// YOUTUBE video: 
// SOURCE files: https://github.com/upiir/arduino_transparent_potentiometer
// WOKWI sketch:

// Links from the video:
// Arduino breadboard prototyping shield: https://s.click.aliexpress.com/e/_ApbCwx
// Arduino UNO R3: https://s.click.aliexpress.com/e/_AXDw1h
// Transparent potentiometer: https://www.banzaimusic.com/Alpha-Clear-Shaft-5k-lin.html
// Potentiometer adaptor PCB: https://www.banzaimusic.com/led-adaptor-pcb.html
// Rectangular knob: https://s.click.aliexpress.com/e/_DnPaHpF
// Small knob: https://s.click.aliexpress.com/e/_Dky3DIN
// Big knob: https://www.banzaimusic.com/eagle-knob-25mm-clear.html
// Chickenhead knob: https://s.click.aliexpress.com/e/_DETRw6h
// Another transparent knob: https://s.click.aliexpress.com/e/_DnPaHpF

// Pimp my Potentiometer video series:
// Part 1 - Pimp My Potentiometer! // https://youtu.be/tHL4RYGSvg4
// Part 2 - Pimp My Potentiometer (again) // https://youtu.be/sE3LSYoCqLQ
// Part 3 - Pimp my Potentiometer -CHEAPER// // https://youtu.be/Bot865qmdsM


void setup() {
  pinMode(3, OUTPUT); // set pin 3 to output (PWM is enabled on this pin)
  pinMode(5, OUTPUT); // set pin 5 to output (PWM is enabled on this pin)  
  pinMode(A0, INPUT); // set pin A0 to analog input
  pinMode(A1, INPUT); // set pin A1 to analog input  
}

void loop() {

  int pot_left_value = analogRead(A0); // read the potentiometer value - goes between 0-1023
  int pot_right_value = analogRead(A1); // read the potentiometer value - goes between 0-1023  

  // set the brightness of the left LED based on the potentiometer value
  analogWrite(5, map(pot_left_value, 0, 1023, 0, 255));

  // set the brightness of the right LED based on the potentiometer value
  analogWrite(3, map(pot_right_value, 0, 1023, 0, 255));
}
