# Text-to-MorseCode using Arduino UNO
This project is a simple Morse code translator implemented using an Arduino Uno and a buzzer. It translates text input into Morse code and plays it through the buzzer.
## Components
| Name   | Quantity | Component       |
|--------|----------|-----------------|
| U1     | 1        | Arduino Uno R3  |
| PIEZO1 | 1        | Piezo           |

## Circuit Diagram
Connect the buzzer to pin 8 of the Arduino Uno.

Download ==> Schematics

## Morse Code Representations
The Morse code representations for each character of the alphabet are defined in the code.

## Usage
1. Upload the code to your Arduino Uno.
2. Open the Serial Monitor to view the Morse code output.
3. Adjust the input text in the `loop()` function to translate different messages.
