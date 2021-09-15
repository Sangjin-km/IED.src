void setup() {
  pinMode(PIN7, OUTPUT);
}

void loop() {
  int a = 0;
  digitalWrite(PIN7, HIGH);
  delay(1000);
  digitalWrite(PIN7, LOW);
  delay(1000);
  while(a<6) { // a<6이면 0~5까지 6번 반복인데 LED는 5번만 켜짐 반대로 a<5하면 4번만 켜짐
    digitalWrite(PIN7, HIGH);
    delay(100);
    digitalWrite(PIN7, LOW);
    delay(100);
    a++;
  }
}
