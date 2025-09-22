/*
  main.cpp - Arduino main function
  (You can inlcude multiple Arduino.h headers if you use
   this folder, but you can't inlcude LinuxDuino.h)

  Copyright (c) 2016 Jorge Garza <jgarzagu@ucsd.edu>
*/

#include "Arduino.h"
#include "wiringPi/wiringPi.h"

int main(void) {
  // wiringPiSetup();

  // unsigned char gpio_num = getGpioNum();
  // if (-1 == gpio_num) printf("Failed to get the number of GPIO!\n");

  setup();

  for (;;) {
    loop();
  }

  return 0;
}