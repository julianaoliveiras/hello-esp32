#include "Arduino.h"
#include "heltec.h"
int i=0; 
void setup () {
 Heltec.begin(true, false, true);
 
 Heltec.display->setContrast(255);
 Heltec.display->clear();
  
 Heltec.display->setFont(ArialMT_Plain_16);
 Heltec.display->drawString(0, 25, "I'm Mostarda");
 while(i<=100){
  Heltec.display->drawInt(0, 25, i);
  i= i+5;
  
 }
 
 Heltec.display->display();
 
 pinMode(25, OUTPUT);
 digitalWrite(25, HIGH);
}
void loop() {
  digitalWrite(25, HIGH);
  delay(1000);                     
  digitalWrite(25, LOW); 
  delay(1000);            
 
}
