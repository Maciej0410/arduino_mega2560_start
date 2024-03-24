// Definicje pinów dla modułu joysticka
const int pinX = A0; // Pin analogowy dla osi X
const int pinY = A1; // Pin analogowy dla osi Y
const int pinButton = 2; // Pin cyfrowy dla przycisku

void setup() {
  // Inicjalizacja pinów
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  pinMode(pinButton, INPUT_PULLUP); // Wewnętrzny rezystor podciągający

  // Inicjalizacja komunikacji szeregowej
  Serial.begin(9600);
}

void loop() {
  // Odczyt wartości osi X i Y
  int xAxisValue = analogRead(pinX);
  int yAxisValue = analogRead(pinY);

  // Odczyt stanu przycisku
  int buttonState = digitalRead(pinButton);

  // Wyświetlenie odczytanych wartości na monitorze szeregowym
  Serial.print("Oś X: ");
  Serial.print(xAxisValue);
  Serial.print("\t Oś Y: ");
  Serial.print(yAxisValue);
  Serial.print("\t Przycisk: ");
  Serial.println(buttonState);

  // Opóźnienie dla stabilności odczytu
  delay(150);
}
