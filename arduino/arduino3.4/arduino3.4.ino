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
    
    if (odebraneDane == "yellow") { 
      digitalWrite(yellow, HIGH); 
      delay(1000);
      digitalWrite(yellow, LOW); 
    }
    else if (odebraneDane == "red") { 
      digitalWrite(red, HIGH); 
      delay(1000);
      digitalWrite(red, LOW); 
    }
    else {
      Serial.print("invalid option!\n");
    }
  }
}