# OLED 3.12" Display Module with SSD1322

OLED 3,12 inch 256x64 display with SSD1322 driver generally handels serial **SPI** (3 or 4 wire) and **parallèl** (8 bits 6800/8080).\
NB.: 6800 can probably be used with 4 data-lines and 8.

## Unboxing

My module came preconfigured for Parallel. 
>[!TIP]
> To find settings for your module:
> - ***pinouts vary in many ways***. You need to check with a Ohm-meter
> - The setting bits **BS** are confured through resistors on solder pads. The names of the resistors vary from make to make.
> - A table on the board shows these settings
>   [BS](./OLEDspi_BS.png)
> - This picture shows that BS1=1 and BS0=0, meaning that the default setting is 8080 parallel.
>   If you have enough wires, you could try this with the **LiquidCrystal** library in Arduino,\
>   probably `LiquidCrystal(en, rw, rs, d0, d1, d2, d3, d4, d5, d6, d7)`

## SPI 4-wire Serial Interface

Simplest way to use your display with Arduino or Raspberry Pi, using few wires and really standard.

OLED PIN | Signal	| Description (ex: with Arduino pins)
--- | --- | ---
1 |	 GND |	Masse GND
2 |	VCC |	Positive Power (generally 3,3 V à 5 V, check datasheet) 5V ou 3.3V
15 |	RES# |	RESET (active low) GPIO pin (eg: D8)
16 |	CS# |	Chip Select (active low) GPIO pin (eg: D10)
14 |	D/C# | Data/Command select (data high, command low) GPIO pin (eg: D9)
13 |	R/W# | Lecture/Écriture (connected to GND pour SPI) GND
12 |	E/RD# |	Activation/Lecture (connected to GND pour SPI) GND
4-11 |	D0-D7 |	Not used in 4-wire SPI mode
Except |		
5 |	D1 | SPI DATA (SDIN/MOSI) MOSI (ex: D11)
6 |	D0 | SPI CLK (D0 in this case) Broche SCLK (ex: D13)

>[!Tip]
> Remarque : Les broches R/W# et E/RD# doivent généralement être connectées à la masse (GND) lorsque l'interface série est utilisée.
> C'est assuré par les pads BS
<!--

Arduino Example

Connexions Parallèles 8 bits (Interface Parallèle 8080)
Cette interface offre des transferts de données plus rapides mais nécessite plus de broches.

Broche OLED	Nom du signal	Description
1	GND	Masse GND
2	VCC	Alimentation positive (3,3 V - 5 V)
15	RES#	Réinitialisation (actif bas)
16	CS#	Sélection de puce (actif bas)
14	D/C#	Sélection Données/Commande
13	R/W#	Signal d'écriture (actif bas)
12	E/RD#	Signal de lecture (actif bas)
4.11	D0-D7	Bus de données 8 bits
Note

Remarque : De nombreux modules sont configurés par défaut pour une interface parallèle 8 bits.
Vous devrez peut-être modifier des résistances de configuration sur le module pour passer en mode SPI si nécessaire.

Important

Points de vigilance

Tension : L'écran est un appareil 3,3 V. Si vous utilisez un microcontrôleur 5 V (comme un Arduino Uno/Nano standard), vous devez utiliser un décaleur de niveau de tension (level shifter) pour éviter d'endommager l'écran. Les modules modernes incluent souvent un décaleur intégré.

Bibliothèque : Des bibliothèques comme U8g2 (pour Arduino) gèrent très bien ces écrans et leurs différentes configurations d'interface. Arduino Example
-->
