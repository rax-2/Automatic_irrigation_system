//                    || श्री ||
#include "pinaka.h" //amar library

void setup();
void loop()
{
    // arduino r monner kotha
    Serial.print("Sensor er value: ");
    Serial.println(SenSorRead());

    // eta kajer code
    if (MoisTure(SenSorRead()) == 11) // jol nei
    {
        // voi_peye_buzar_Bajao();
        pump_Chalu_koro();
        Serial.println("Jol lagbe!!.....");
    }
    else if (MoisTure(SenSorRead()) == 12) // jol vore geche
    {
        pump_Bondho_koro();
        // anonde_buzar_Bajao();
        Serial.println("Onek Hoyeche  !!");
    }
    else if (MoisTure(SenSorRead()) == 10) // jol ache,
    {
        // emni_buzar_Bajao();
        Serial.println("Ami valo achi...");
    }
    else // Error handeling
    {
        Serial.println("System Faad Denge...");
    }
    delay(8);
}
