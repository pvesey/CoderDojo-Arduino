// https://www.instructables.com/id/How-to-use-a-Buzzer-Arduino-Tutorial/
// Wiring UP
// -ve to GND
// +ve to 5V 
// S to Pin 8


/* Arduino tutorial - Buzzer / Piezo Speaker
   More info and circuit: http://www.ardumotive.com/how-to-use-a-buzzer-en.html
   Dev: Michalis Vasilakis // Date: 9/6/2015 // www.ardumotive.com */


const int buzzer = 8; //buzzer to arduino pin 8


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 8 as an output

}

void loop(){
 
  tone(buzzer, 243); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  
}
