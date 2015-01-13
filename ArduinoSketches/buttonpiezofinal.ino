#define C4 262
#define D4 294
#define E4 330
#define F1 44
#define F6 1397

int speaker = 3;

int button1 = 2;

int button2 = 4;

int val = 0;

int val2 = 0;

void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}
void loop() {
  val = digitalRead(button1);
  if (val == HIGH) {
    tone(speaker, C4, 500);
    delay(500);
  }
  if (val == LOW) {
    tone(speaker, F1, 500);
    delay(500);
  }
  val2 = digitalRead(button2);
  if (val2 == HIGH) {
    tone(speaker, F6, 500);
    delay(500);
  }
  if (val2 == LOW) {
    tone(speaker, E4, 500);
    delay(500);
  }
}
