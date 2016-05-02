/*
 * Star war imperial march sound
 * Pallab Mahmud
 * 05/02/2016
 * Original work: http://forum.arduino.cc/index.php?topic=259450.0
*/

#include "RingoHardware.h"
#include "FunStuff.h"

int i;    //declaire any global variables here

void setup(){
  HardwareBegin();        //initialize Ringo's brain to work with his circuitry
  PlayMarch();            //play the imperial march
  SwitchMotorsToSerial(); //Call "SwitchMotorsToSerial()" before using Serial.print functions as motors & serial share a line
  RestartTimer();    
}


void PlayMarch(){
  
  //low pitch
  PlaySound(NOTE_A4, 500);
  PlaySound(NOTE_A4, 500);
  PlaySound(NOTE_A4, 500);
  PlaySound(NOTE_F4, 350);
  PlaySound(NOTE_C5, 150);
  PlaySound(NOTE_A4, 500);
  PlaySound(NOTE_F4, 350);
  PlaySound(NOTE_C5, 150);
  PlaySound(NOTE_A4, 650);

  delay(500);
  
  //high pitch
  PlaySound(NOTE_E5, 500);
  PlaySound(NOTE_E5, 500);
  PlaySound(NOTE_E5, 500);
  PlaySound(NOTE_F5, 350);
  PlaySound(NOTE_C5, 150);
  PlaySound(NOTE_GS4, 500);
  PlaySound(NOTE_F4, 350);
  PlaySound(NOTE_C5, 150);
  PlaySound(NOTE_A4, 650);  
}

void PlaySound(unsigned int note, unsigned int duration){
  PlayChirp(note, 40);
  delay(duration);
  OffChirp();
  delay(50);
}

    
void loop(){   
  // put your own code here  
} // end of loop() function




