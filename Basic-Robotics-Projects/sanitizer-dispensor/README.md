# sanitizer-dispensor



```
Sure, here are the pinouts for the components used in the provided code:

- Ultrasonic Sensor:
  - Trigger Pin (TRIG_PIN): Connected to digital pin 2 (You may connect this to any digital pin as per your hardware setup)
  - Echo Pin (ECHO_PIN): Connected to digital pin 3 (You may connect this to any digital pin as per your hardware setup)

- Relay:
  - Relay Control Pin (RELAY_PIN): Connected to digital pin 4 (You may connect this to any digital pin as per your hardware setup)

These pin assignments are defined at the beginning of the code using `#define` directives, making them easy to modify if needed.

```




New and working;:
To connect a 12V operating motor with a relay according to the provided code, follow these steps:

### Hardware Setup:

1. **Relay Module**:
    
    - Connect the VCC pin of the relay module to the 5V output of your Arduino.
    - Connect the GND pin of the relay module to the GND (ground) of your Arduino.
    - Connect one terminal of the relay coil to a digital pin on the Arduino (e.g., pin 4).
    - Connect the other terminal of the relay coil to the GND (ground) of your Arduino.
2. Waterpump:
    
    - Connect the positive terminal (+) of the 12V operating waterpump to one of the terminals of the relay output (usually labeled as "COM" or "Common").
    - Connect the negative terminal (-) of the 12V operating fan to the GND (ground) of your power supply and the GND (ground) of your Arduino.
3. **Power Supply**:
    
    - Connect the positive terminal (+) of the 12V power supply to the other terminal of the relay output (usually labeled as "Nc" or "Normally Closed").
    - Connect the negative terminal (-) of the 12V power supply to the GND (ground) of your power supply and the GND (ground) of your Arduino.




