#define BUZZER_PIN 3 // Definicja pinu, do którego podłączony jest buzzer
#define MAX_BUZZER_COUNT 5 // Maksymalna liczba odtwrzeń dźwięku

int buzzerCount = 0;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT); // Ustawienie pinu jako wyjście
}

void loop() {
  if (buzzerCount < MAX_BUZZER_COUNT) {
    tone(BUZZER_PIN, 650); // Generowanie dźwięku o częstotliwości 650 Hz
    delay(500); // Pauza przez 500 milisekund
    noTone(BUZZER_PIN); // Wyłączenie dźwięku
    delay(500); // Pauza przez kolejne 500 milisekund
    buzzerCount++; 
  }
}
