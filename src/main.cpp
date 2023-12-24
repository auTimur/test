#include <Arduino.h>
void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}
void loop() {
  digitalWrite(13,1);
  delay(10000);
  digitalWrite(13,0);
  delay(10000);
  digitalWrite(12,1);
  delay(10000);
  digitalWrite(12,0);
  delay(10000);
}
