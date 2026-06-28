# Usage

Once wired and programmed, the system works automatically:

1. **Open the pantry door** → Ultrasonic sensor detects distance ≥ 8 cm → LEDs turn on
2. **Close the pantry door** → Distance drops to ≤ 7 cm → LEDs turn off after the delay

## Customization

### Change LED Color

Edit `pixels1.Color(240, 237, 225)` in `firmware/PantryLight.ino`. Values are RGB (0–255 each):

| Color | R | G | B |
|-------|---|---|---|
| Warm White | 240 | 237 | 225 |
| Cool White | 255 | 255 | 255 |
| Red | 255 | 0 | 0 |
| Blue | 0 | 0 | 255 |
| Green | 0 | 255 | 0 |

### Change Brightness

Adjust `setBrightness(150)` — range is 0 (off) to 255 (max).

### Change Distance Threshold

| Variable | Current | Location |
|----------|---------|----------|
| ON threshold | `distance >= 8` cm | `loop()` |
| OFF threshold | `distance <= 7` cm | `loop()` |

The 1 cm hysteresis gap prevents flickering if the door sits right at the boundary.

### Change Timeout

Adjust `#define DELAYVAL 20000` — value is in milliseconds (20000 = 20 seconds).
