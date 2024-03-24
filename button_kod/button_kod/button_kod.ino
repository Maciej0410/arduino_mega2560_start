// Deklaracja pinu, do którego podłączony jest przycisk
#define BUTTON_PIN 3 

int tmp = 0;

void setup() {
  // Inicjalizacja monitora szeregowego
  Serial.begin(9600);
  
  // Ustawienie pinu przycisku jako wejście
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  // Sprawdzenie stanu przycisku
  int stanPrzycisku = digitalRead(BUTTON_PIN);
  
  // Jeśli przycisk został wciśnięty
  if (stanPrzycisku == HIGH) {
      tmp++;
      Serial.println(tmp);
  }
  delay(500);
}

