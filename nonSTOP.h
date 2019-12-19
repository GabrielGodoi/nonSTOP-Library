/*
Author:  Eng. Gabriel Godoi
Date: 19 dez. 2019

Description: This lib put any function in a millis delay, ie. it doesn't stop your code.
*/

#ifndef nonSTOP_h
#define nonSTOP_h
 
#include <Arduino.h>

class nonSTOP{

  public:
  
    nonSTOP(int delayTime, void (*address)());  //The constructor is a function that define the object, like his name and the parameters  
    void nonStopDelay();
    
  private:

    int _delayTime;
    unsigned long lastDelay;
    void (*addressFunction)();

  
};

#endif
