int len = 100; // delay b/w led blinks
int repeat = 1; // # of blinks per led
int piezo = 10; // piezo output pin

void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i<11; i++){ // initialize pins 2-10 for output
    pinMode(i, OUTPUT);
    digitalWrite (i, LOW);
  }
  Serial.begin(9600); // initiate serial monitor for debugging
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int k = 2; k<10; k++){
    blink (k, repeat, len);
  } // blink leds in sequence

  p_buzz(piezo,1000,250); // buzz piezo 1000 times, with 250 microsecond delay
   
  
  for (int m= 9; m>1; m--){
    blink (m, repeat, len);
  } // blink leds in reverse sequence
}

void blink (int pin, int times, int len){ //led blink function, turn pinout high, delay, low,delay, repeat
  for (int j = 0; j<times; j++){
    digitalWrite (pin, HIGH);
    Serial.println("blink");
    delay(len);
    digitalWrite (pin, LOW);
    Serial.println("blink");
    delay (len);
  }
}

void p_buzz(int pin, int times, int len){//buzzer func, same principle as above, but delay is much smaller in microseconds
  for (int l = 0; l<times; l++){
    digitalWrite (pin, HIGH);
    
    delayMicroseconds(len);
    digitalWrite (pin, LOW);
    
    delayMicroseconds (len);
  }
}


