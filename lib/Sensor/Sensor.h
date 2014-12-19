#include "Arduino.h"

class Sensor {
public:
    Sensor();
    void tick();
    void playerHitDetected(int damage);
private:
    static const int LED_PIN = 7;
    static const int RECV_PIN_1 = 9;
    static const int MAX_HEALTH = 1000;

    static const int STATE_ALIVE = 1;
    static const int STATE_DEAD = 2;

    int currentHealth;
    int currentState;
    unsigned long time;

    void checkHitIndicator();
    void hitIndicatorOn();
    void hitIndicatorOff();
};
