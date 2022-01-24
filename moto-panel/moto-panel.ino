#include <Servo.h>

Servo servo;

int principale = A0;
int dx = A1;
int sx = A2;
int i = 0;

void setup() {
  Serial.begin(9600);
  servo.write(0);
}

void loop() {
  /* while (analogRead(principale) < 600) {
    if (analogRead(dx) > 500) {
      servo.attach(6);
      servo.write(0);
      Serial.println("DX");
    }
    else if (analogRead(sx) > 700) {
      servo.attach(6);
      servo.write(360);
      Serial.println("SX");
    }
  } */

  while (analogRead(principale) < 600) {
    Serial.println("s");
    servo.attach(6);
    servo.write(i++);
  }
  servo.detach();
}
