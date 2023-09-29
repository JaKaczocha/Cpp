#include <Servo.h> //Biblioteka odpowiedzialna za serwa
 
Servo serwomechanizm;  //Tworzymy obiekt, dzięki któremu możemy odwołać się do serwa 
int pozycja = 0; //Aktualna pozycja serwa 0-180
int zmiana = 6; //Co ile ma się zmieniać pozycja serwa?
 
void setup() 
{ 
    Serial.begin(9600);
  serwomechanizm.attach(9);  //Serwomechanizm podłączony do pinu 9
} 
 
void loop() 
{  
    String str;
    int i {0};
    if(Serial.available())
    {
        str = Serial.readString();
        i = str.toInt();
        Serial.print(i);
        Serial.println();
        if(i >= 0 && i <= 180)
        {
            serwomechanizm.write(i);
        }
    }
    
  delay(200); //Opóźnienie dla lepszego efektu                        
}