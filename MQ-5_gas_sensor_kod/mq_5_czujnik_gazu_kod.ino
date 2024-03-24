// Definicja pinu analogowego, do którego podłączony jest czujnik
const int pinCzujnika = A0;  // Zakładamy, że czujnik jest podłączony do pinu A0

void setup() {
  // Inicjalizacja monitora szeregowego
  Serial.begin(9600);
}

void loop() {
  // Odczytanie wartości analogowej z czujnika
  int wartoscAnalogowa = analogRead(pinCzujnika);

  // Wyświetlenie wartości w monitorze szeregowym
  Serial.print("Wartość analogowa: ");
  Serial.println(wartoscAnalogowa);

  // Wykrycie obecności gazu (przykładowy próg)
  if (wartoscAnalogowa > 500) {
    Serial.println("Wykryto obecność gazu!");
    
    // Przybliżona próba oszacowania stężenia gazu
    // Im większa wartość analogowa, tym większe stężenie (w przybliżeniu)
    float stężenie = map(wartoscAnalogowa, 0, 1023, 0, 100); // Przeliczenie wartości analogowej na procentową skalę (0-100)
    Serial.print("Przybliżone stężenie gazu: ");
    Serial.println(stężenie);
  }

  // Opóźnienie przed kolejnym odczytem
  delay(5000); // Możesz dostosować czas opóźnienia do własnych potrzeb
}