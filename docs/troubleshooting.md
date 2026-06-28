# Troubleshooting

## LEDs don't turn on

| Cause | Fix |
|-------|-----|
| Power too low | Use a 5V / 5A PSU for both strips |
| Wrong pin | Check STRIP1/STRIP2 pin defines in firmware |
| Library not installed | Install Adafruit NeoPixel via Library Manager |
| Wire loose | Check data line connections |

## Sensor always reads 0

| Cause | Fix |
|-------|-----|
| Echo pin wrong | Ensure Echo → D4 |
| Trig pin wrong | Ensure Trig → D2 |
| Sensor faulty | Test with a standalone sketch |
| 5V not connected | Power the sensor from the 5V pin |

## Sensor always reads maximum (or inconsistent)

- The sensor may be picking up echoes from the side walls. Point it directly at the door.
- Ensure the sensor is at least 30 cm from any parallel surface to avoid multipath reflections.

## LEDs flicker or show wrong colors

- **Power issue:** The WS2818B strips draw significant current. Use a dedicated 5V PSU.
- **Data line too long:** Keep data wires under 1 meter.
- **Add a capacitor:** Place a 1000 µF electrolytic capacitor across the 5V/GND near the strips.

## Serial Monitor shows garbage

- Check that baud rate is set to **9600** in the Serial Monitor.
- Ensure no other software is using the same COM port.

## Lights stay on forever

- The sensor may be detecting something behind the door. Check the mounting angle.
- Reduce `DELAYVAL` to see if it eventually turns off — if so, the sensor reading may be marginal.
