# Multiple LED Project

This Arduino project controls a series of LEDs connected to pins 0 through 9. The LEDs light up sequentially in both directions, creating a running light effect.

## Components

- **LEDs**: Ten LEDs connected to pins 0 through 9.
- **Resistors**: Appropriate resistors for each LED.
- **Arduino Board**: For controlling the LEDs.

## Code Overview

1. **Setup**:

   - Initializes ten pins as outputs for the LEDs using a `for` loop.

2. **Loop**:
   - Lights up LEDs sequentially from the lowest to the highest pin and then in reverse order.
   - Each LED is turned on and off with a delay to create a running light effect.

## Code

```cpp
/* Multiple LED
   Telah dimodifikasi
*/

int timer = 500; // Pewaktuan melambat
// Array (penyusunan) nomor pin LED
int ledPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int pinCount = 10; // Jumlah pin (panjang array)

void setup() {
    // Elemen array penomoran dari 0 sampai (pinCount - 1).
    // Gunakan for loop untuk inisialisai pin sebagai output
    for (int thisPin = 0; thisPin < pinCount; thisPin++)  {
        pinMode(ledPins[thisPin], OUTPUT);
    }
}

void loop() {
    // Loop dari pin rendah ke lebih tinggi
    for (int thisPin = 0; thisPin < pinCount; thisPin++) {
        // ON-kan pin :
        digitalWrite(ledPins[thisPin], HIGH);
        delay(timer);
        // OFF-kan pin :
        digitalWrite(ledPins[thisPin], LOW);
    }
    // Loop dari pin lebih tinggi ke pin lebih rendah
    for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
        // ON-kan pin :
        digitalWrite(ledPins[thisPin], HIGH);
        delay(timer);
        // OFF-kan pin:
        digitalWrite(ledPins[thisPin], LOW);
    }
}
```

## Usage

- Setup: Connect the LEDs to pins 0 through 9 on the Arduino.
- Run: Upload the code to the Arduino and observe the running light effect as the LEDs light up sequentially in both directions.
