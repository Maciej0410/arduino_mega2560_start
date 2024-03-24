#define RED_PIN 9    // Pin podłączony do czerwonej diody LED
#define GREEN_PIN 10 // Pin podłączony do zielonej diody LED
#define BLUE_PIN 11  // Pin podłączony do niebieskiej diody LED

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  // Cykl zmiany kolorów RGB
  for(int r = 0; r < 256; r++) {
    analogWrite(RED_PIN, r);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 255 - r);
    delay(10);
  }
  for(int g = 0; g < 256; g++) {
    analogWrite(RED_PIN, 255 - g);
    analogWrite(GREEN_PIN, g);
    analogWrite(BLUE_PIN, 0);
    delay(10);
  }
  for(int b = 0; b < 256; b++) {
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 255 - b);
    analogWrite(BLUE_PIN, b);
    delay(10);
  }
}
