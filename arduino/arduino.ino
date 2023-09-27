constexpr int start = 6, stop = 14;


void setup() {
  for(int i {start}; i < stop; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop() {
  constexpr int sleep{100};
  for(int i {start}; i < stop; i++)
  {
    digitalWrite(i, HIGH);
    delay(sleep);
    digitalWrite(i,LOW);

  }
}
