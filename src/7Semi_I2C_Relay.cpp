#include "7Semi_I2C_Relay.h"

RelayModule::RelayModule(uint8_t addr) {
    _addr = addr;
}

void RelayModule::begin() {
    Wire.begin();
}

uint8_t RelayModule::crc(uint8_t *data, uint8_t len) {
    uint8_t c = 0;
    for (int i = 0; i < len; i++) c ^= data[i];
    return c;
}

void RelayModule::sendPacket(uint8_t reg, uint8_t data) {
    uint8_t pkt[3];
    pkt[0] = reg;
    pkt[1] = data;
    pkt[2] = crc(pkt, 2);

    Wire.beginTransmission(_addr);
    Wire.write(pkt, 3);
    Wire.endTransmission();
}

void RelayModule::allOn() { sendPacket(0x01, 0x0F); }
void RelayModule::allOff() { sendPacket(0x01, 0x00); }

void RelayModule::relayOn(uint8_t r) {
    sendPacket(0x02, (1 << (r - 1)));
}

void RelayModule::relayOff(uint8_t r) {
    sendPacket(0x03, (1 << (r - 1)));
}

uint8_t RelayModule::readState() {
    Wire.beginTransmission(_addr);
    Wire.write(0x00);
    Wire.endTransmission();
    delay(2);
    Wire.requestFrom(_addr, 1);

    unsigned long t = millis();
    while (!Wire.available()) {
        if (millis() - t > 50) return 0xFF;
    }
    return Wire.read();
}
