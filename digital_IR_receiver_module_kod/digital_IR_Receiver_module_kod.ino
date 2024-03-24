#include <IRremote.h>

// Definicja pinu, do którego podłączony jest odbiornik podczerwieni
const int IR_RECEIVER_PIN = 2;

// Tworzenie obiektu IRrecv
IRrecv irrecv(IR_RECEIVER_PIN);

decode_results results; // Struktura do przechowywania wyników dekodowania sygnałów

void setup() {
  // Inicjalizacja monitora szeregowego
  Serial.begin(9600);

  // Inicjalizacja odbiornika podczerwieni
  irrecv.enableIRIn(); // Rozpoczęcie odbierania sygnałów podczerwonych
}

void loop() {
  if (irrecv.decode(&results)) { // Jeśli odbierzemy sygnał podczerwony
    // Wyświetl informacje o odebranym sygnale w monitorze szeregowym
    Serial.print("Received IR code: 0x");
    Serial.println(results.value, HEX);

    irrecv.resume(); // Wznów odbieranie kolejnych sygnałów
  }
}
