v// Definicja pinu analogowego, do którego podłączony jest czujnik
const int pinCzujnika = A0;  

void setup() {
  // Inicjalizacja monitora szeregowego
  Serial.begin(9600);
}

void loop() {
  // Odczytanie wartości analogowej z czujnika
  int wartoscAnalogowa = analogRead(pinCzujnika);

  // Obliczenie wilgotności w procentach
  float wilgotnosc = (float)wartoscAnalogowa / 1023.0 * 100.0;

  // Wyświetlenie wartości wilgotności w monitorze szeregowym
  Serial.print("Wilgotność: ");
  Serial.print(wilgotnosc);
  Serial.println("%");

  // Opóźnienie przed kolejnym odczytem
  delay(1000); // Możesz dostosować czas opóźnienia do własnych potrzeb
}
