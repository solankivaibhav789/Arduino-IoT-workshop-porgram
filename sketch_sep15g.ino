#include<Servo.h>

Servo myservo;
int input;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);     //9 is pin number for orange wire
  Serial.begin(9400);     //9400 is baud rate
  myservo.write(75);      //initial 75 degree
}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available() > 0)
    {
      input = serial.parseInt();
      myservo.write(input);
      Serial.println(input);
      delay(1000);
    }
}
