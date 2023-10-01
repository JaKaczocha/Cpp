float triangleArea(float a, float h);
float rectangleArea(float a, float b);
float circleArea(float r);

void setup() {
    Serial.begin(9600);

}

void loop() {
    for(int i = 1, j = 2; i < 10; i++, j++)
    {
        float t{0.0f}, r{0.0f},c{0.0f};
        t = triangleArea(i, j);
        r = rectangleArea(i, j);
        c = circleArea(i);
        
    

        Serial.print("triangle area: ");
        Serial.print(t);
        Serial.print("\n");

        
        Serial.print("circle area: ");
        Serial.print(c);
        Serial.print("\n");

        
        Serial.print("rectangle area: ");
        Serial.print(r);
        Serial.print("\n");
    }
    delay(10000);
}

float triangleArea(float a, float h)
{
    return a * h / 2.0;
}
float rectangleArea(float a, float b)
{
    return a * b;
}
float circleArea(float r)
{
    return PI * r;
}