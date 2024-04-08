#include <string.h>

String input;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(5, OUTPUT);
}

void loop() {
    String input = "\0";
    input = Serial.readString();
    String output = "odebrano: " + input;
    if(strcmp(output.c_str(), "odebrano: ") ) {
        Serial.print(output);
        if(uint16_t i = input.toInt()) {
            i = i % 255;
            analogWrite(5, i);
        }
    }
    
    
    input[0] = '\0';
  
 

}
