# SPI LCD 3.95" TFT with Touch

It's a common LCD display with touch.
Controller is ILI9488, supported in Arduino.

## PINS

### LCD & TOUCH
| # | Fct | Description |
| --- | --- | --- |
| 1 | VCC | 5/3.3 V | 
| 2 | GND | Ground | 
| 3 | CS | chip select, active low | 
| 4 | RESET | reset, active low | 
| 5 | DC/RS | register high, data low
| 6 | SDI | MOSI (write to)
| 7 | SCK | SPI Clock
| 8 | BL | Backlight (3.3V max bright)
| 9 | SDO | MISO (read from)
|| Only if Touchscreen used
| 10 | T_CLK | TOUCH SPI CLK
| 11 | T_CS | TOUCH CS
| 12 | T_DI| TOUCH MOSI
| 13 | T_DO | TOUCH MISO
| 14 | T_IRQ | TOUCH_IRQ low when touch

### SD-CARD
Cf. board labels opposite side, no special explanation required 

## Using with GFX_Library_for_Arduino
See [GFX_dev.h](./GFX_dev.h) for example usage with *4d_systems_esp32s3_gen4_r8n16*
