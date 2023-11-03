vvoid setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}
void loop() {
  if(digitalRead(2) == 0)
    Serial.println("z");
  if(Serial.available())
  {
    Serial.read();
    digitalWrite(13, 1);
  }
  delay(10);
  digitalWrite(13, 0);
}
