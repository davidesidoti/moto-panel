/**
* Project Name: Pannello fotovoltaico inseguitore
* Project URI: -
* Description: Un pannello fotovoltaico su una base che insegue il sole.
* Version: 1.0
* Author: Sidoti Davide
* Author URI: https://sidotidavide.me/
**/

#include <Servo.h>

Servo servoX;
Servo servoY;

int ftUp = A0;
int ftDown = A1;
int ftRight = A2;
int ftLeft = A3;

void setup() {
  Serial.begin(9600);
  servoX.attach(3);
  servoX.write(1);
}

void loop() {
}
