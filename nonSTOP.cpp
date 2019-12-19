/*
Author:  Eng. Gabriel Godoi
Date: 19 dez. 2019

Description: This lib put any function in a millis delay, ie. it doesn't stop your code.
*/

#include <Arduino.h>
#include <nonSTOP.h>

nonSTOP::nonSTOP(int delayTime, void (*address)()){

  _delayTime = delayTime;
  addressFunction = address;
  
}

void nonSTOP::nonStopDelay(){

  if ((millis() - lastDelay) >= _delayTime){
  (*addressFunction)();
  lastDelay = millis();  
}


  
}
