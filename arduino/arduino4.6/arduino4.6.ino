int receivedVal = 0;
int threshold = 0;

void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  static bool isLow{true};
  static int count{0};
  receivedVal = analogRead(A5);
  threshold = analogRead(A4); 
  
  if (receivedVal < threshold) { 
     if(isLow == true)
     {
        count++;
        Serial.print(count);
        Serial.println(". swap!");
     }
     digitalWrite(8, HIGH); 
     isLow = false;
  } else {
    if(isLow == false)
     {
        count++;
        Serial.print(count);
        Serial.println(". swap!");
     }
     digitalWrite(8, LOW);    
     isLow = true;
  }
  
  delay(50);
}