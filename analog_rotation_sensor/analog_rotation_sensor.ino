// Przykładowe zakresy wartości analogowych i odpowiadające im kąty obrotu
const int minValue = 0;   // Wartość analogowa odpowiadająca kątowi 0 stopni
const int maxValue = 1023;  // Wartość analogowa odpowiadająca kątowi 360 stopni

void setup() {
  // Inicjalizacja monitora szeregowego
  Serial.begin(9600);
}

void loop() {
  // Odczytanie wartości analogowej z czujnika obrotu
  int sensorValue = analogRead(A0);

  // Przekształcenie wartości analogowej na kąt obrotu
  int rotationAngle = map(sensorValue, minValue, maxValue, 0, 360);

  // Wyświetlenie kąta obrotu w monitorze szeregowym
  Serial.print("Kąt obrotu: ");
  Serial.println(rotationAngle);

  // Opóźnienie przed kolejnym odczytem
  delay(2500); 
}
