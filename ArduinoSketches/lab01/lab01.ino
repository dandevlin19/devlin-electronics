//Daniel Devlin
//Lab 01 
void function1() {
  Serial.println("I am an Arduino and I communicate at 9600 Baud rate. Ports 0 and 1 are used for serial communication.Serial communication works well for debuggingand monitoring sensor values during theexecution of a program."); 
}
void function2a(int x, int y) {
  Serial.println((x/2)*y);
}
void function3() {
  String characters [] = ("Daniel Craig, Terry Crews, Jason Statham, Sylvester Stallone, Bruce Willis"); 
  Serial.println("Favorite Movie Characters");
  for (int i = 0; i < 5; i++) {
    Serial.println(characters[i]);
  }
}
void function4() {
    String numbers [] = {1, 2, 3, 4, 5, 6, 7, 8};
    
}
void setup() {
  Serial.begin(9600);
  function1(); 
  function2a(120,512);
  function3();
  Serial.println(numbers[0]);
  Serial.println(numbers[1]);
  Serial.println(numbers[2]);
  Serial.println(numbers[3]);
  Serial.println(numbers[4]);
  Serial.println(numbers[5]);
  Serial.println(numbers[6]);
  Serial.println(numbers[7]);
  Serial.println(numbers[7]);
  Serial.println(numbers[6]);
  Serial.println(numbers[5]);
  Serial.println(numbers[4]);
  Serial.println(numbers[3]);
  Serial.println(numbers[2]);
  Serial.println(numbers[1]);
  Serial.println(numbers[0]);
  Serial.println(numbers[1]);
  Serial.println(numbers[2]);
  Serial.println(numbers[3]);
  Serial.println(numbers[4]);
  Serial.println(numbers[5]);
  Serial.println(numbers[6]);
  Serial.println(numbers[6]);
  Serial.println(numbers[5]);
  Serial.println(numbers[4]);
  Serial.println(numbers[3]);
  Serial.println(numbers[2]);
  Serial.println(numbers[1]);
}
void loop() {
  
}
