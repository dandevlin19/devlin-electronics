//Daniel Devlin
//RowBLink

int pins [] = {2, 3, 4, 5, 6, 7, 8, 9};

void rowBlink() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(pins [i], HIGH);
    delay(1000);
    digitalWrite(pins [i], LOW);
    delay(1000);
   
  }
}
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop() {
  rowBlink(); 
}
