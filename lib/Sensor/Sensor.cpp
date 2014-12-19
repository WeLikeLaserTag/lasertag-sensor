#include "Sensor.h"

Sensor::Sensor() {
    int currentHealth = MAX_HEALTH;
    int currentState = STATE_ALIVE;
    unsigned long time = 0;

    pinMode(LED_PIN, OUTPUT);
}

void Sensor::tick() {
    checkHitIndicator();
    // if there is a result
    if (false) {
        playerHitDetected(10);
    }
}

void Sensor::checkHitIndicator() {
//    if(currentState == STATE_ALIVE && millis() > time) {
    if(millis() > time) {
        hitIndicatorOff();
    }
}

void Sensor::playerHitDetected(int damage) {
//    currentHealth = currentHealth - damage;
//    if(currentHealth < 0) {
//        currentHealth = 0;
//    }
//    if(currentHealth == 0) {
//        currentState = STATE_DEAD;
//    }
    hitIndicatorOn();
}

void Sensor::hitIndicatorOn() {
    digitalWrite(LED_PIN, HIGH);
    time = millis() + 50;
}

void Sensor::hitIndicatorOff() {
    digitalWrite(LED_PIN, LOW);
}