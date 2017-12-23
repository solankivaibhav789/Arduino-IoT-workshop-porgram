#include <Servo.h>

Servo myservo;
int input;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);     //9 is pin number for orange wire
  Serial.begin(9400);     //9400 is baud rate
  myservo.write(75);      //initial 75 degree
}
//one wire with ground(of power)
//other one with vcc(5v)(of power)

void loop() {
  // put your main code here, to run repeatedly:
    int i=0;
      //input = Serial.parseInt();
      //myservo.write(input);
      //Serial.println(input);
      //delay(1000);
      myservo.write(1);
      delay(1000);
      myservo.write(179);
      delay(1000);
}
