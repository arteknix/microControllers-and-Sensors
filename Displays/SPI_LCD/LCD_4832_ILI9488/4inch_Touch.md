# SPI LCD 3.95" TFT with Touch

It's a common LCD display with touch

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

### CARD-READER
