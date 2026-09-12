from pathlib import Path

content = r"""# Experiment 02 — Temperature Monitoring Using Arduino and LCD

## Aim

To build a temperature monitoring system using an **Arduino Uno**, a **TMP36 temperature sensor**, and a **16×2 LCD**, and display the measured temperature on the LCD.

> **Note:** The original experiment statement mentions both temperature and humidity. The standard Tinkercad Circuits component used in this experiment is the **TMP36**, which measures temperature only. It does not provide humidity measurements. A DHT11/DHT22 sensor would be required for actual temperature and humidity monitoring.

---

## Components Required

- Arduino Uno R3
- TMP36 Temperature Sensor
- 16×2 LCD
- 10 kΩ Potentiometer
- 220 Ω Resistor
- Breadboard
- Jumper Wires
- Tinkercad Circuits

---

## Circuit Connections

### TMP36

When viewing the flat face of the TMP36 with its pins pointing downward:

| TMP36 Pin | Connection |
|---|---|
| Left | Arduino 5V |
| Middle | Arduino A0 |
| Right | Arduino GND |

### 16×2 LCD

| LCD Pin | Label | Connection |
|---:|---|---|
| 1 | GND | Arduino GND |
| 2 | VCC | Arduino 5V |
| 3 | VO | Potentiometer middle pin |
| 4 | RS | Arduino D7 |
| 5 | RW | Arduino GND |
| 6 | E | Arduino D6 |
| 7 | DB0 | Not connected |
| 8 | DB1 | Not connected |
| 9 | DB2 | Not connected |
| 10 | DB3 | Not connected |
| 11 | DB4 | Arduino D5 |
| 12 | DB5 | Arduino D4 |
| 13 | DB6 | Arduino D3 |
| 14 | DB7 | Arduino D8 |
| 15 | LED+ | 5V through 220 Ω resistor |
| 16 | LED− | Arduino GND |

### Potentiometer

The potentiometer is used to control the LCD contrast.

| Potentiometer Pin | Connection |
|---|---|
| Outer pin | Arduino 5V |
| Middle pin | LCD pin 3 (VO) |
| Other outer pin | Arduino GND |

The two outer pins may be interchanged; the middle pin must be connected to LCD pin 3.

---

## Working Principle

The TMP36 produces an analog voltage proportional to the temperature.

The Arduino reads this voltage through analog pin **A0** using its built-in ADC. The voltage is then converted into temperature in degrees Celsius.

For the TMP36:

- Output voltage at 25°C is approximately **0.75 V**
- Temperature is calculated using:

```text
Temperature (°C) = (Voltage − 0.5) × 100