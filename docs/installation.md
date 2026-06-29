# Installation

## 1. Install Arduino IDE

Download and install the [Arduino IDE](https://www.arduino.cc/en/software).

## 2. Install Required Libraries

Open the Arduino IDE and go to:

**Tools → Manage Libraries** (or `Ctrl+Shift+I`)

Search for and install:

| Library | Author |
|---------|--------|
| `Adafruit NeoPixel` | Adafruit |

## 3. Clone the Repository

```bash
git clone https://github.com/iamDaleon/Automate_Pantry_Light.git
cd Automate_Pantry_Light
```

## 4. Open the Firmware

The project is organized as follows:

```
Automate_Pantry_Light/
├── assets/               # Images (schematic, housing render)
├── docs/                 # Documentation
├── firmware/
│   └── PantryLight.ino   # Single-file firmware
├── LICENSE
└── README.md
```

- Open `firmware/PantryLight.ino` in the Arduino IDE
- Select your board: **Tools → Board → Arduino Uno**
- Select the correct port: **Tools → Port → COMx (or /dev/ttyACMx)**

## 5. Wire the Hardware

Follow the wiring guide in [docs/wiring.md](wiring.md).

## 6. Upload

Click the **→ (Upload)** button in the Arduino IDE.

## 7. Verify

Open the **Serial Monitor** (Tools → Serial Monitor, 9600 baud). You should see distance readings:

```
Distance: 45
Distance: 12
Distance: 3
```
