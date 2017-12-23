  int val;
  int tempPin =1;
  void setup() {
    Serial.begin(9600);
    // put your setup code here, to run once:
  
  }
  
  void loop() {
    val = analogRead(tempPin);
    float av = (val/1024.0) * 5000;
    //convert voltage to the cel using above equation
    //Vout/Vcc = Val / power(2,n)
    float cel = av/10;
    float farh = (cel * 9)/5 + 32;
  
    Serial.print("temp in farahanheat=");
    Serial.print(farh);
    Serial.print("*f");
    Serial.println();
  
    Serial.print("temp in cel=");
    Serial.print(cel);
    Serial.print("*c");
    Serial.println();
    delay(1000);
    // put your main code here, to run repeatedly:
  }
