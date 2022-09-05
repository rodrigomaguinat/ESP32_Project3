#include <Arduino.h>

void setup() {
  pinMode(14,OUTPUT);     // pin 14 como salida
}

void loop() {
  digitalWrite(14, HIGH);
  delay(1000);
  digitalWrite(14, LOW);
  delay(1000);
}