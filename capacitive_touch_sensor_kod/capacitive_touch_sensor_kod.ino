#define TOUCH_PIN 2   

void setup() {
  pinMode(TOUCH_PIN, INPUT);
  Serial.begin(9600); // Inicjalizacja komunikacji szeregowej do monitora szeregowego
}

void loop() {
  int touchValue = digitalRead(TOUCH_PIN); // Odczytaj wartość z modułu sensora dotyku
  
  if (touchValue == HIGH) {
    Serial.println("Dotknięcie wykryte!");
  }
  
  delay(100); // Poczekaj przez 100 milisekund przed kolejną iteracją pętli
}
