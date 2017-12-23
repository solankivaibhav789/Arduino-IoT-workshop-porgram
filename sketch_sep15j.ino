const int trigPin = 2;    //sender
const int echoPin = 4;    

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  long duration,inches,cm;

  pinMode(trigPin,OUTPUT);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  pinMode(echoPin,INPUT);
  duration = pulseIn(echoPin,HIGH);

  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  Serial.print(inches);
  Serial.print("in");
  Serial.println();
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  Serial.println();
  delay(1000);
  
  //pulse is calculated by pulseIn fun in microseconds
  
  //convert time in inches or cm
  //speed of sound is 340 m/s so 29 microsecond per second
  

}

long microsecondsToInches(long microseconds)
{
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
   return microseconds / 29 /2;
}


