//                    || श्री ||

int water_pump = 13;  // pump relay r data pin
int buzer;            // buzer er pin
int wet_sensor = 450; // veja sensor er value
int dry_sensor = 600; // sukhno sensor er value

void setup() //
{
    // set pin mode
    pinMode(buzer, OUTPUT);
    pinMode(water_pump, OUTPUT);

    // serial monitor setup
    Serial.begin(9600);
}

int SenSorRead() // sensor tekhe moisture check koro
{
    return analogRead(A5);
}

int MoisTure(int data) // moisture dekhe decision nao
{
    if (data >= dry_sensor) // jodi jol kom ache
    {
        return 11;
    }
    else if (data <= wet_sensor) // jol besi ache
    {
        return 12;
    }
    else // thik ache sob
    {
        return 10;
    }
}

void pump_Chalu_koro()
{
    digitalWrite(water_pump, HIGH);
}

void pump_Bondho_koro()
{
    digitalWrite(water_pump, LOW);
}

void emni_buzar_Bajao()
{
    for (int bazer_er_loop = 0; bazer_er_loop < 2; bazer_er_loop++)
    {
        digitalWrite(buzer, HIGH);
        delay(100);
        digitalWrite(buzer, LOW);
        delay(400);
    }
}

void voi_peye_buzar_Bajao()
{
    for (int bazer_er_loop = 0; bazer_er_loop < 10; bazer_er_loop++)
    {
        digitalWrite(buzer, HIGH);
        delay(20);
        digitalWrite(buzer, LOW);
        delay(30);
    }
}

void anonde_buzar_Bajao()
{
    for (int bazer_er_loop = 0; bazer_er_loop < 5; bazer_er_loop++)
    {
        digitalWrite(buzer, HIGH);
        delay(20);
        digitalWrite(buzer, LOW);
        delay(60);
        digitalWrite(buzer, HIGH);
        delay(20);
        digitalWrite(buzer, LOW);
        delay(280);
    }
}
