/*
  Learning Arduino 2014-1-28
  
*/

int ledPin = 13;
//  Every Arduino program needs these 2 methods: setup and loop
void setup() {
  //  Initialize pins as outputs
  pinMode(ledPin,OUTPUT);
}

void loop() {
  //  This is the main loop that will be run
  
  //  HIGH is on, LOW is off
  digitalWrite(ledPin,HIGH);
  delay(2000);
  digitalWrite(ledPin,LOW);
  delay(1000);
}
