#include <Wire.h>

int button_out = 4;

void setup() {
  // put your setup code here, to run once:
  Wire.begin(2);
  Wire.onRequest(requestEvent);

  pinMode(button_out, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
}

void requestEvent()
{
  int b_state = digitalRead(button_out);
  Wire.write(b_state);
}

