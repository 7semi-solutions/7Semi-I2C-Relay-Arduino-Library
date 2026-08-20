#ifndef _7SEMI_I2C_RELAY_H_
#define _7SEMI_I2C_RELAY_H_

#include <Arduino.h>
#include <Wire.h>

class RelayModule {
public:
    RelayModule(uint8_t addr);
    void begin();
    void allOn();
    void allOff();
    void relayOn(uint8_t r);
    void relayOff(uint8_t r);
    uint8_t readState();

private:
    uint8_t _addr;
    uint8_t crc(uint8_t *data, uint8_t len);
    void sendPacket(uint8_t reg, uint8_t data);
};

#endif
