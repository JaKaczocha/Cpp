constexpr int start {6}, stop {14};
constexpr int sw {5};

void setup() {
  for(int i {start}; i < stop; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  pinMode(sw,INPUT_PULLUP);
}

void loop() {
  constexpr int sleep{100};
  for(int i {start}; i < stop; i++)
  {
    while(digitalRead(sw) == HIGH)
    {
      //wait
    }
    
    digitalWrite(i, HIGH);
    delay(sleep);
    digitalWrite(i,LOW);
    
  }
}
