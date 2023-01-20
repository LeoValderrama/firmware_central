#include <Arduino.h>
#include <DHT.h>
/*
pines Propósito general D0 - D13
pin D0 ----- digital --sensor temperatura y humedad
pin D01 -----
pin D02 -----
pin D03 -----
pin D04 -----
.
.
.
pin A0 --- análogo -- control de voltaje de batería 
*/
// ************************dht11 humedad - temperatura *******************

#define dhtPin 0
#define dhtType DHT11
DHT dht(dhtPin, dhtType);

// *********************** Barómetro ***************************************



// *********************** Gas ***************************************


// *********************** Luz ***************************************


// *********************** Anemómetro ***************************************


// *********************** Higrómetro ***************************************


// *********************** Precipitación ***************************************

 void setup()
{
    Serial.begin(115200);
    dht.begin();
}
void loop(){
    
}