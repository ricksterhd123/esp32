#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  sleep(5);
  Serial.println("Hello world");
}
