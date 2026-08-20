# 7Semi I2C Relay Arduino Library

Arduino library for the **7Semi Industrial 4-Channel I2C Relay Module**. It provides simple functions to control individual relays, switch all relays ON/OFF, and read relay states over I2C.

## Features

* 4-channel relay control
* I2C communication
* Individual relay ON/OFF control
* All relay ON/OFF control
* Relay state reading
* CRC-supported communication
* Simple and easy-to-use Arduino API

## Installation

### Arduino IDE

1. Download this repository as a ZIP file.
2. Open **Arduino IDE**.
3. Go to **Sketch → Include Library → Add .ZIP Library**.
4. Select the downloaded ZIP file.

## Example

```cpp id="gj4q1n"
#include <7Semi_I2C_Relay.h>

RelayModule relay(0x20);

void setup()
{
    relay.begin();
}

void loop()
{
    relay.relayOn(1);
    delay(1000);

    relay.relayOff(1);
    delay(1000);
}
```

## Available Functions

```cpp id="1kb9ov"
relay.begin();        // Initialize I2C

relay.relayOn(1);     // Turn Relay 1 ON
relay.relayOff(1);    // Turn Relay 1 OFF

relay.allOn();        // Turn all relays ON
relay.allOff();       // Turn all relays OFF

relay.readState();    // Read relay state
```

Relay channels are numbered from **1 to 4**.

## Repository

[7Semi I2C Relay Arduino Library](https://github.com/7semi-solutions/7Semi-I2C-Relay-Arduino-Library)

## License

See the `LICENSE` file for license information.

## Author

**7Semi**

Embedded hardware, sensor modules, development boards, and industrial electronics.
# 7Semi I2C Relay Arduino Library

Arduino library for the **7Semi Industrial 4-Channel I2C Relay Module**. It provides simple functions to control individual relays, switch all relays ON/OFF, and read relay states over I2C.

## Features

* 4-channel relay control
* I2C communication
* Individual relay ON/OFF control
* All relay ON/OFF control
* Relay state reading
* CRC-supported communication
* Simple and easy-to-use Arduino API

## Installation

### Arduino IDE

1. Download this repository as a ZIP file.
2. Open **Arduino IDE**.
3. Go to **Sketch → Include Library → Add .ZIP Library**.
4. Select the downloaded ZIP file.

## Example

```cpp id="gj4q1n"
#include <7Semi_I2C_Relay.h>

RelayModule relay(0x20);

void setup()
{
    relay.begin();
}

void loop()
{
    relay.relayOn(1);
    delay(1000);

    relay.relayOff(1);
    delay(1000);
}
```

## Available Functions

```cpp id="1kb9ov"
relay.begin();        // Initialize I2C

relay.relayOn(1);     // Turn Relay 1 ON
relay.relayOff(1);    // Turn Relay 1 OFF

relay.allOn();        // Turn all relays ON
relay.allOff();       // Turn all relays OFF

relay.readState();    // Read relay state
```

Relay channels are numbered from **1 to 4**.

## Repository

[7Semi I2C Relay Arduino Library](https://github.com/7semi-solutions/7Semi-I2C-Relay-Arduino-Library)

## License

See the `LICENSE` file for license information.

## Author

**7Semi**

Embedded hardware, sensor modules, development boards, and industrial electronics.
# 7Semi I2C Relay Arduino Library

Arduino library for the **7Semi Industrial 4-Channel I2C Relay Module**. It provides simple functions to control individual relays, switch all relays ON/OFF, and read relay states over I2C.

## Features

* 4-channel relay control
* I2C communication
* Individual relay ON/OFF control
* All relay ON/OFF control
* Relay state reading
* CRC-supported communication
* Simple and easy-to-use Arduino API

## Installation

### Arduino IDE

1. Download this repository as a ZIP file.
2. Open **Arduino IDE**.
3. Go to **Sketch → Include Library → Add .ZIP Library**.
4. Select the downloaded ZIP file.

## Example

```cpp id="gj4q1n"
#include <7Semi_I2C_Relay.h>

RelayModule relay(0x20);

void setup()
{
    relay.begin();
}

void loop()
{
    relay.relayOn(1);
    delay(1000);

    relay.relayOff(1);
    delay(1000);
}
```

## Available Functions

```cpp id="1kb9ov"
relay.begin();        // Initialize I2C

relay.relayOn(1);     // Turn Relay 1 ON
relay.relayOff(1);    // Turn Relay 1 OFF

relay.allOn();        // Turn all relays ON
relay.allOff();       // Turn all relays OFF

relay.readState();    // Read relay state
```

Relay channels are numbered from **1 to 4**.

## Repository

[7Semi I2C Relay Arduino Library](https://github.com/7semi-solutions/7Semi-I2C-Relay-Arduino-Library)

## License

See the `LICENSE` file for license information.

## Author

**7Semi**

Embedded hardware, sensor modules, development boards, and industrial electronics.
# 7Semi I2C Relay Arduino Library

Arduino library for the **7Semi Industrial 4-Channel I2C Relay Module**. It provides simple functions to control individual relays, switch all relays ON/OFF, and read relay states over I2C.

## Features

* 4-channel relay control
* I2C communication
* Individual relay ON/OFF control
* All relay ON/OFF control
* Relay state reading
* CRC-supported communication
* Simple and easy-to-use Arduino API

## Installation

### Arduino IDE

1. Download this repository as a ZIP file.
2. Open **Arduino IDE**.
3. Go to **Sketch → Include Library → Add .ZIP Library**.
4. Select the downloaded ZIP file.

## Example

```cpp id="gj4q1n"
#include <7Semi_I2C_Relay.h>

RelayModule relay(0x20);

void setup()
{
    relay.begin();
}

void loop()
{
    relay.relayOn(1);
    delay(1000);

    relay.relayOff(1);
    delay(1000);
}
```

## Available Functions

```cpp id="1kb9ov"
relay.begin();        // Initialize I2C

relay.relayOn(1);     // Turn Relay 1 ON
relay.relayOff(1);    // Turn Relay 1 OFF

relay.allOn();        // Turn all relays ON
relay.allOff();       // Turn all relays OFF

relay.readState();    // Read relay state
```

Relay channels are numbered from **1 to 4**.

## Repository

[7Semi I2C Relay Arduino Library](https://github.com/7semi-solutions/7Semi-I2C-Relay-Arduino-Library)

## License

See the `LICENSE` file for license information.

## Author

**7Semi**

Embedded hardware, sensor modules, development boards, and industrial electronics.
