int receivedVal = 0;
float napiecie = 0;
 
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}
 
void loop() {
  receivedVal = analogRead(A5);
  Serial.println(receivedVal);
  digitalWrite(2, HIGH);
  delay(receivedVal);
  digitalWrite(2, LOW);
  delay(receivedVal);
}