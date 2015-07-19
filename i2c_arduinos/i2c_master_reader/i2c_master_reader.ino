#include <Wire.h>

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.requestFrom(2, 1);
  while(Wire.available()){
   int c = Wire.read();
    Serial.println(c);
  }
  delay(500);
}
