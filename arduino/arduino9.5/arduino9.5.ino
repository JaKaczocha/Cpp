#define trigPin 12
#define echoPin 11


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT); //Pin, do którego podłączymy trig jako wyjście
  pinMode(echoPin, INPUT); //a echo, jako wejście
  pinMode(2, OUTPUT); //Wyjście dla buzzera
  for(int i = 2; i <= 7; i++)
    {
        pinMode(i,OUTPUT);
    }
}
 
void loop() {  
    int odl = zmierzOdleglosc();
    Serial.print(odl);
    Serial.println();

    if(odl > 180)
    {
        for(int i = 2; i <=7; i++)
        {
            digitalWrite(i, HIGH);
        }
    }
    else if(odl > 150)
    {
        for(int i = 2; i <=6; i++)
        {
            digitalWrite(i, HIGH);
        }
        digitalWrite(7, LOW);
    }
    else if(odl > 120)
    {
        for(int i = 2; i <=5; i++)
        {
            digitalWrite(i, HIGH);
        }
        digitalWrite(7, LOW);
        digitalWrite(6, LOW);
    }
    else if(odl > 90)
    {
        for(int i = 2; i <=4; i++)
        {
            digitalWrite(i, HIGH);
        }
        digitalWrite(7, LOW);
        digitalWrite(6, LOW);
        digitalWrite(5, LOW);
    }
    else if(odl > 60)
    {
        for(int i = 2; i <=3; i++)
        {
            digitalWrite(i, HIGH);
        }
        digitalWrite(7, LOW);
        digitalWrite(6, LOW);
        digitalWrite(5, LOW);
        digitalWrite(4, LOW);
    }
    else if(odl > 30)
    {
        
        digitalWrite(2, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(6, LOW);
        digitalWrite(5, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);
    }
    else {
    {
        for(int i = 2; i <=7; i++)
        {
            digitalWrite(i, LOW);
        }
    }
    }
    delay(100);
} 
 
int zmierzOdleglosc() {
  long czas, dystans;
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  czas = pulseIn(echoPin, HIGH);
  dystans = czas / 58;
 

  return dystans;
}
 