#include <Arduino.h>
#include <Sensor.h>
#include <IRremote.h>

Sensor sensor;
IRrecv irrecv;
decode_results results;

void setup() {
    irrecv.setPin(9);
    irrecv.enableIRIn();
    Serial.begin(9600);
}

void loop() {
    if (irrecv.decode(&results)) {
        Serial.println(results.value, HEX);
        sensor.playerHitDetected(10);
        irrecv.resume(); // Receive the next value
    }
    sensor.tick();
}
