# PantryLight

**An automatic pantry light that turns on when you open the door and off when you close it.**

[![Arduino](https://img.shields.io/badge/Arduino-Uno-00979D?logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![NeoPixel](https://img.shields.io/badge/NeoPixel-WS2818B-00C853)](https://www.adafruit.com/category/168)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

---

## Overview

No light in the pantry? This project solves that with an **Arduino Uno**, an **HC-SR04 ultrasonic sensor**, and **two WS2818B addressable LED strips**.

- Door opens → lights turn on
- Door closes → lights turn off after a short delay
- No switches, no wiring into the house — fully self-contained

## Quick Start

```bash
git clone https://github.com/iamDaleon/Automate_Pantry_Light.git
cd Automate_Pantry_Light
```

1. Wire the hardware — see the [wiring diagram](docs/wiring.md)
2. Install the [Adafruit NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel) library
3. Open `firmware/PantryLight.ino` in the Arduino IDE
4. Upload to your Arduino Uno

Full setup guide: [docs/installation.md](docs/installation.md)

## Hardware

| Component | Qty |
|-----------|-----|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| WS2818B LED Strip (60 LEDs) | 2 |
| 5V Power Supply (5A+) | 1 |

Pin mapping and specs: [docs/hardware.md](docs/hardware.md)

## Features

- **Hands-free** — ultrasonic sensor detects the door position
- **Energy efficient** — auto-off timer (configurable, default 20s)
- **Adjustable** — change brightness, color, distance threshold via firmware
- **Dual strips** — 120 LEDs total for even illumination

## Customization

See [docs/usage.md](docs/usage.md) for:
- Changing LED color (RGB values)
- Adjusting brightness (0–255)
- Setting distance thresholds
- Modifying the auto-off delay

## Troubleshooting

LEDs not lighting? Sensor reading weird values? Check [docs/troubleshooting.md](docs/troubleshooting.md).

## Roadmap

- [x] Breadboard prototype
- [ ] Design and 3D print a case
- [ ] Add photos of the installed device
- [ ] Add wiring schematic
- [ ] Continuous refinements

## License

Distributed under the MIT License. See [LICENSE](LICENSE).

## Contact

**Daleon L.** — [@iamDaleon](https://twitter.com/iamDaleon)

Project: [github.com/iamDaleon/Automate_Pantry_Light](https://github.com/iamDaleon/Automate_Pantry_Light)
