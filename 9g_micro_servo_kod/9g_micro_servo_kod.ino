#include <Servo.h>

// Definicja pinu, do którego podłączony jest serwomechanizm
const int servoPin = 9; // Przykładowy pin, dostosuj do swojego projektu

Servo myServo; // Utworzenie obiektu serwomechanizmu

void setup() {
  // Inicjalizacja serwomechanizmu
  myServo.attach(servoPin);
}

void loop() {
  // Obrót serwomechanizmem w jednym kierunku
  myServo.write(0); // Ustawienie kąta na 0 stopni
  delay(1000); // Opóźnienie 1 sekundy
  // Obrót serwomechanizmem w drugim kierunku
  myServo.write(180); // Ustawienie kąta na 180 stopni
  delay(1000); // Opóźnienie 1 sekundy
}
