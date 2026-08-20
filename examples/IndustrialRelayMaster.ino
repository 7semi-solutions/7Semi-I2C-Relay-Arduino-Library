#include <Wire.h>
#include <7Semi_I2C_Relay.h>

#define SLAVE_ADDR 0x20

RelayModule relay(SLAVE_ADDR);

void setup() {
  Serial.begin(9600);
  relay.begin();

  Serial.println("==== INDUSTRIAL RELAY MASTER ====");
  Serial.println("ON / OFF");
  Serial.println("R1 ON / R1 OFF");
  Serial.println("R2 ON / R2 OFF");
  Serial.println("R3 ON / R3 OFF");
  Serial.println("R4 ON / R4 OFF");
  Serial.println("READ");
}

void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();

    if (cmd == "ON") relay.allOn();
    else if (cmd == "OFF") relay.allOff();
    else if (cmd == "R1 ON") relay.relayOn(1);
    else if (cmd == "R2 ON") relay.relayOn(2);
    else if (cmd == "R3 ON") relay.relayOn(3);
    else if (cmd == "R4 ON") relay.relayOn(4);
    else if (cmd == "R1 OFF") relay.relayOff(1);
    else if (cmd == "R2 OFF") relay.relayOff(2);
    else if (cmd == "R3 OFF") relay.relayOff(3);
    else if (cmd == "R4 OFF") relay.relayOff(4);
    else if (cmd == "READ") {
      uint8_t s = relay.readState();
      Serial.print("STATE: 0x");
      Serial.println(s, HEX);
    }
    else Serial.println("INVALID CMD");
  }
}
