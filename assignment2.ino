const int potPin = 14;

void
setup() {
  Serial.begin(115200);
  
}
void
loop() {
  int potValue = analogRead(potPin);

  // Serial.print('Potentiometer_Value: 10');
  Serial.println(potValue);
  delay(200);
}
