//Servo library -> Version 1.1.7
#include <Servo.h>

//Definition of the servos
Servo servo1;
Servo servo2;

int axis1 = 90;
int axis2 = 90;

void setup() {
  //These are the pins
  servo1.attach(7);
  servo2.attach(6);

  servo1.write(90);
  servo2.write(90);
}

void loop() {
  //SERVO 1
  if (analogRead(0) < 200 && axis1 < 180) {
    axis1++;
    servo1.write(axis1);
  }
  if (analogRead(0) > 700 && axis1 > 0) {
    axis1--;
    servo1.write(axis1);
  }

  //SERVO 2
  if (analogRead(1) < 200 && axis2 < 180) {
    axis2++;
    servo2.write(axis2);
  }
  if (analogRead(1) > 700 && axis2 > 0) {
    axis2--;
    servo2.write(axis2);
  }

  delay(15);
}