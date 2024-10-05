int timer = 100;           // интервал между миганиями светодиодов

void setup() {
  // проходимся в цикле по каждому светодиоду от 2 до 7 и влючаем нужный режим
  for (int thisPin = 1; thisPin < 7; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // опять проходимся в цикле по каждому светодиоду
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    // включаем
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // выключаем
    digitalWrite(thisPin, LOW);
  }

  // ещё раз проходимся в цикле, но в обратном порядке от 7 до 2
  for (int thisPin = 7; thisPin >= 2; thisPin--) {
    // включаем
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // выключаем
    digitalWrite(thisPin, LOW);
  }
}