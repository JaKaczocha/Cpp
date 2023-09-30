#define red 8
#define yellow 9
 
String odebraneDane = ""; 
 
void setup() {
  Serial.begin(9600); 
  pinMode(yellow, OUTPUT); 
  pinMode(red, OUTPUT);
  
  digitalWrite(yellow, LOW); 
  digitalWrite(red, LOW);
}
 
void loop() {
  if(Serial.available() > 0) { 
   
    odebraneDane = Serial.readStringUntil('\n'); 
    
    switch (odebraneDane.charAt(0)) {
    case 'y':
        digitalWrite(yellow, HIGH); 
        delay(1000);
        digitalWrite(yellow, LOW); 
        break;
    case 'r':
        digitalWrite(red, HIGH); 
        delay(1000);
        digitalWrite(red, LOW);
        break;
    default:
        Serial.print("invalid option!\n");
        break; 
    }
    
  }
}