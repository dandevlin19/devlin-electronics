//Daniel Devlin
//Lab_02

int pins [] = {2, 3, 4, 5, 6, 7, 8, 9};

void first4() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(pins [i], HIGH);
    delay(500);
    digitalWrite(pins [i], LOW); 
    delay(500);
  }
}
void everyother() {
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(2, LOW);
  delay(200);
    digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);
    digitalWrite(6, HIGH);
  delay(200);
  digitalWrite(6, LOW);
  delay(200);
    digitalWrite(8, HIGH);
  delay(200);
  digitalWrite(8, LOW);
  delay(200);
} 
void bustabeat() {
  digitalWrite(2, HIGH);
  delay(200);
    digitalWrite(4, HIGH);
  delay(200);
    digitalWrite(6, HIGH);
  delay(200);
    digitalWrite(8, HIGH);
  delay(200);
}
void all() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(100);

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
   bustabeat();
   first4();
   everyother();
   all();
}
