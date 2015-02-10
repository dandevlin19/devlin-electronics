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
    for (int i = 0; i < 8; i++) {
      Serial.println(numbers[i]);
    }
}
void printFibo(int n) {
  int prev = 0; 
  int cur = 1; 
  int fibo = 0;
  int container [] = {0, 1, 0};
  for (int i = 0; i < n; i++) {
    fibo = cur + prev;
    println(fibo);
    prev = cur; 
    cur = fibo; 
  }
}
void setup() {
  Serial.begin(9600);
  function1(); 
  function2a(120,512);
  function3();
  function4();
  printFibo(10);
}
void loop() {
  
}
