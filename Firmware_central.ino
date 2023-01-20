#include <Arduino.h>
#include <DHT.h>
/*
pines Propósito general D0 - D13
pin D0 -----
pin D01 -----
pin D02 -----
pin D03 -----
pin D04 -----
*/
// ************************dht11 humedad - temperatura *******************
#include ledpin_0

// *********************** presión ***************************************




 void setup()
{
    Serial.begin(115200);
    dht.begin();
}
void loop(){
    
}