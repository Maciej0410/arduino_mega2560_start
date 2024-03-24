#define IR_LED_PIN 3  // Pin cyfrowy podłączony do diody podczerwieni

void setup() {
  pinMode(IR_LED_PIN, OUTPUT); // Ustawienie pinu jako wyjście
  Serial.begin(9600); // Inicjalizacja monitora szeregowego
}

void loop() {
  // Wysłanie sygnału podczerwonego
  sendIRSignal();
  
  delay(1000); // Opóźnienie 1 sekundy przed kolejnym wysłaniem sygnału
}

void sendIRSignal() {
  // Wysłanie sygnału podczerwonego przez diodę podczerwieni
  digitalWrite(IR_LED_PIN, HIGH); // Włączenie diody
  delayMicroseconds(500); // Trwanie sygnału wysokiego (np. 500 mikrosekund)
  digitalWrite(IR_LED_PIN, LOW); // Wyłączenie diody
}
