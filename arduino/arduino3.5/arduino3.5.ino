#define RED_PIN 8
#define YELLOW_PIN 9
 
String receivedData = ""; 
 
void setup() {
  Serial.begin(9600); 
  pinMode(YELLOW_PIN, OUTPUT); 
  pinMode(RED_PIN, OUTPUT);
  
  digitalWrite(YELLOW_PIN, LOW); 
  digitalWrite(RED_PIN, LOW);
}
 
void loop() {
  static bool inUseRed{false},inUseYellow{false};
  if(Serial.available() > 0) { 
   
    receivedData = Serial.readStringUntil('\n'); 
    
    if (receivedData == "yellow") { 
      inUseYellow = !inUseYellow;  
      digitalWrite(YELLOW_PIN, inUseYellow); 
    }
    else if (receivedData == "red") { 
      inUseRed= !inUseRed;  
      digitalWrite(RED_PIN, inUseRed); 
    }
    else {
      Serial.print("invalid option!\n");
    }
  }
}