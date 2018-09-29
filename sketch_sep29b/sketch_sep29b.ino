int led=10;
void setup() {
  pinMode(led,OUTPUT);
}
void loop() {
  analogWrite(led,1);
  delay(5000);
  analogWrite(led,0);
  delay(5000); 
}
