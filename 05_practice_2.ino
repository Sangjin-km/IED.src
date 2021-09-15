void setup() {
  pinMode(PIN7, OUTPUT);
}

void loop() {
  int a = 0;
  digitalWrite(PIN7, HIGH);
  delay(1000);
  digitalWrite(PIN7, LOW);
  delay(1000);
  while(a<6) {
    digitalWrite(PIN7, HIGH);
    delay(100);
    digitalWrite(PIN7, LOW);
    delay(100);
    a++;
  }
}
