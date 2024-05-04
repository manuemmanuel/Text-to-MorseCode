const int buzzerPin = 8;
const String morseCodes[] = {
  ".-",   // A
  "-...", // B
  "-.-.", // C
  "-..",  // D
  ".",    // E
  "..-.", // F
  "--.",  // G
  "....", // H
  "..",   // I
  ".---", // J
  "-.-",  // K
  ".-..", // L
  "--",   // M
  "-.",   // N
  "---",  // O
  ".--.", // P
  "--.-", // Q
  ".-.",  // R
  "...",  // S
  "-",    // T
  "..-",  // U
  "...-", // V
  ".--",  // W
  "-..-", // X
  "-.--", // Y
  "--.."  // Z
};
// setup
void setup() {
  pinMode(buzzerPin, OUTPUT);
}
// loop
void loop() {
  String inputText = "Hello World"; 
  playMorseCode(inputText);
  delay(1000);
}

void playMorseCode(String text) {
  for (int i = 0; i < text.length(); i++) {
    char c = toupper(text[i]);
    if (c == ' ') {
      delay(700);
    } else {
      String morse = morseCodes[c - 'A'];
      for (int j = 0; j < morse.length(); j++) {
        if (morse[j] == '.') {
          playDot();
        } else if (morse[j] == '-') {
          playDash();
        }
        delay(200);
      }
      delay(400);
    }
  }
}

void playDot() {
  tone(buzzerPin, 1000, 100);
  delay(150);
}

void playDash() {
  tone(buzzerPin, 1000, 300);
  delay(150);
}
