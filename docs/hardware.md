# Hardware

## Parts List

| Part | Quantity | Notes |
|------|----------|-------|
| Arduino Uno (or compatible) | 1 | Any ATmega328P board works |
| HC-SR04 Ultrasonic Sensor | 1 | Blue or standard version |
| WS2818B Individually Addressable LED Strip | 2 | 60 LEDs per strip, 5V |
| 5V Power Supply | 1 | Rated for LED strip current draw (~2A per strip) |
| Jumper Wires | ~10 | Male-to-female for sensor, male-to-male for strips |
| Breadboard (optional) | 1 | For prototyping |

## Pin Mapping

| Arduino Pin | Connected To |
|-------------|-------------|
| D2 | HC-SR04 Trig |
| D4 | HC-SR04 Echo |
| D11 | LED Strip 1 (Data In) |
| D12 | LED Strip 2 (Data In) |
| 5V | HC-SR04 VCC, LED Strip 5V |
| GND | HC-SR04 GND, LED Strip GND |

## Specifications

- **LED Color:** Warm white (240, 237, 225) — adjustable in firmware
- **Brightness:** 150/255 — adjustable in firmware
- **Distance Threshold (ON):** ≥ 8 cm
- **Distance Threshold (OFF):** ≤ 7 cm
- **Timeout:** 20 seconds after last trigger
- **Baud Rate:** 9600 (serial debug output)
