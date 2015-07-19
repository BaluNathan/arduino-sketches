int button_out = 4, r = 11, y = 10, g = 6, b = 5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
  pinMode(button_out, INPUT);
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT); 
   

}

void loop() {
  // put your main code here, to run repeatedly:
  int b_state = digitalRead(button_out);
  Serial.println(b_state);
  delay(1);

  while (b_state){
    digitalWrite(g, HIGH);
    delay(100);
    digitalWrite(g,LOW);
    delay (150);
    digitalWrite(y,HIGH);
    delay(100);
    digitalWrite(y,LOW);
    delay(150);
    digitalWrite(r,HIGH);
    delay(100);
    digitalWrite(r,LOW);
    delay (150);
    for (int i = 0; i<2; i++){
      digitalWrite(b,HIGH);
      delay(300);
      digitalWrite(b,LOW);
    }
    
  }

  

}
