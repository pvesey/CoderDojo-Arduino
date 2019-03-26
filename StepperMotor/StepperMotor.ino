// https://circuitdigest.com/microcontroller-projects/arduino-stepper-motor-control-tutorial

// Wiring up.
// Steper Motor Controller Board
// In1 - Pin 8 
// In2 - Pin 9
// In3 - Pin 10
// In4 - Pin 11
// +ve - 5V
// -ve - GND

#include <Stepper.h>
#define STEPS 32

Stepper stepper(STEPS, 8, 10, 9, 11); // asign pins and energising order

int val = 0;


void setup() {
 Serial.begin(9600);
 stepper.setSpeed(261); // 261 is frequency of middle C
}

void loop() {
 if (Serial.available() >0 ){
  val = Serial.parseInt();
  stepper.step(val);
  Serial.println(val); 
 }
}
