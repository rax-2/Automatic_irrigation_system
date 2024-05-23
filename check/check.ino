//                    || श्री ||

int water_pump = 13; // pump relay r data pin
int buzer ;      // buzer er pin
int SensOr = A5;    // moistior sensere

void setup()
{
    Serial.begin(9600);

    pinMode(SensOr, INPUT);
    pinMode(water_pump, OUTPUT);

    for (int i = 0; i < 2; i++)
    {
        // digitalRead(SensOr);
        digitalWrite(water_pump, HIGH);
        delay(4000);
        digitalWrite(water_pump, LOW);
        delay(10);
    }
}

void loop()
{
    Serial.print("Sensor er value: ");
    Serial.println(analogRead(SensOr));
    delay(1000);
}
