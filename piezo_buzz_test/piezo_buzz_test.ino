void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(11,HIGH);
    delayMicroseconds(250);
    digitalWrite(11,LOW);
    delayMicroseconds(250);
    //Serial.println("buzz"); --> time taken for this changes sound

}
