// Definicje pinów dla mikrosilnika prądu stałego
const int pinPWMA = 9; // Pin PWM dla kierunku A
const int pinPWMB = 10; // Pin PWM dla kierunku B

void setup() {
  // Ustawiamy piny jako wyjścia
  pinMode(pinPWMA, OUTPUT);
  pinMode(pinPWMB, OUTPUT);
}

void loop() {
  // Włączamy silnik w kierunku A
  digitalWrite(pinPWMA, HIGH);
  digitalWrite(pinPWMB, LOW);

  // Czekamy 2 sekundy
  delay(2000);

  // Wyłączamy silnik
  digitalWrite(pinPWMA, LOW);
  digitalWrite(pinPWMB, LOW);

  // Czekamy 1 sekundę
  delay(1000);

  // Włączamy silnik w kierunku B
  digitalWrite(pinPWMA, LOW);
  digitalWrite(pinPWMB, HIGH);

  // Czekamy 2 sekundy
  delay(2000);

  // Wyłączamy silnik
  digitalWrite(pinPWMA, LOW);
  digitalWrite(pinPWMB, LOW);

  // Czekamy 1 sekundę
  delay(1000);
}
