int receivedVal = 0;
float volt = 0;
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  receivedVal = analogRead(A5);
  volt = receivedVal * (5.0/1024.0); 
  Serial.println(volt);
  delay(200);
}