#define BUTTON 7
#define RED 2
#define YELLOW 3
#define GREEN 4
#define POTENTIOMETER A5 

void setup() {
    Serial.begin(9600);
    pinMode(BUTTON, INPUT_PULLUP);
    pinMode(RED, OUTPUT);
    pinMode(YELLOW, OUTPUT);
    pinMode(GREEN, OUTPUT);
}

void loop() {
    static bool yellowUp {false}, redUp{false};

    if(!digitalRead(BUTTON))
    {
        Serial.print("enter the value read from the potentiometer from 0-1023: ");
        int value {-1};
        
        while (Serial.available() == 0) {
           
        }

        value = Serial.parseInt();
        Serial.read(); 

        if(abs(value - analogRead(POTENTIOMETER)) <= 50)
        {
            Serial.println("U WIN!!!"); 
            digitalWrite(GREEN, HIGH);
            digitalWrite(RED, LOW);
            digitalWrite(YELLOW, LOW);
            delay(5000);
            digitalWrite(GREEN, LOW);
            exit(0);           
        }
        else if(redUp)
        {
            digitalWrite(RED, LOW);
            digitalWrite(YELLOW, LOW);
            Serial.println("you lose!!!");
            exit(0);
        }
        else if (yellowUp) 
        {
            digitalWrite(RED, HIGH);
            redUp = true;
            Serial.println("1 MORE CHANCE....");
        }
        else 
        {
            Serial.println("Maybe next time....");
            digitalWrite(YELLOW, HIGH);
            yellowUp = true;
        }
    }
}
