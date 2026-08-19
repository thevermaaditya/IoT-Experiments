# Experiment 01: LED Control via Smartphone App

## Aim

To control an LED using an Arduino Uno by sending commands through serial communication. The circuit is simulated using Tinkercad. The serial commands represent control instructions that could be sent by a smartphone application through a communication interface.

## Components Required

- Arduino Uno R3
- LED
- 220 Ω Resistor
- Connecting Wires
- Tinkercad Circuit Simulator

## Circuit Connections

| Component | Connection |
|---|---|
| Arduino Digital Pin 13 | Connected to one end of the 220 Ω resistor |
| 220 Ω Resistor | Connected between Pin 13 and the LED anode |
| LED Anode (+) | Connected to the resistor |
| LED Cathode (-) | Connected to Arduino GND |

Circuit flow:

```text
Arduino Pin 13 → 220 Ω Resistor → LED Anode (+)
                                   LED Cathode (-) → GND
```

## Working Principle

The Arduino continuously checks for incoming data through the serial interface.

- When the command `1` is received, Arduino sets Pin 13 to `HIGH`, turning the external LED ON.
- When the command `0` is received, Arduino sets Pin 13 to `LOW`, turning the external LED OFF.

The serial commands simulate the ON/OFF instructions that could be sent from a smartphone application through a Bluetooth or Wi-Fi communication module in a physical implementation.

## Source Code

The Arduino source code is available in:

```text
LED_Control.ino
```

## How to Run the Simulation

1. Open Tinkercad Circuits.
2. Create the Arduino and LED circuit according to the connections above.
3. Copy the code from `LED_Control.ino` into the Arduino code editor.
4. Start the simulation.
5. Open the Serial Monitor.
6. Send `1` to turn the LED ON.
7. Send `0` to turn the LED OFF.

## Expected Output

| Command | LED State |
|---|---|
| `1` | ON |
| `0` | OFF |

## Result

The Arduino successfully controlled the external LED based on commands received through serial communication.

## Conclusion

This experiment demonstrates the basic principle of remotely controlling an electronic device using command-based communication. Although the Tinkercad simulation uses the Serial Monitor for sending commands, the same control logic can be extended to a smartphone-based IoT system using Bluetooth or Wi-Fi communication modules.

## Screenshots

Place the simulation screenshots inside the `screenshots` folder:

```text
screenshots/
├── circuit.png
└── output.png
```
