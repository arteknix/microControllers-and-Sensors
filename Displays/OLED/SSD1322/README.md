# L'écran ***UPDATED after DEBUG - NOT YET TESTED***
***OLED 3,12 pouces 256x64 avec contrôleur SSD1322*** prend généralement en charge les interfaces **SPI (série 3 ou 4 fils) et parallèle (8 bits 6800/8080)**.
> Le brochage exact peut varier légèrement selon le module spécifique, mais voici une liste des connexions SPI 4 fils et parallèles 8080 (les plus courantes) :
>
## Connexions SPI 4 fils (Interface Série)
C'est l'interface la plus simple et la plus utilisée avec les microcontrôleurs comme Arduino ou Raspberry Pi, car elle nécessite moins de fils.
Broche OLED | Nom du signal	| Description	Connexion typique (ex: Arduino)
--- | --- | ---
1 |	GND	| Masse	GND
2 | VCC	| Alimentation positive (généralement 3,3 V à 5 V, vérifiez la fiche technique)	5V ou 3.3V
15	| RES# |	Signal de réinitialisation (actif bas)	Broche GPIO (ex: D8)
16	| CS#	| Sélection de puce (actif bas)	Broche GPIO (ex: D10)
14 | D/C#	| Sélection Données/Commande (Haut pour données, Bas pour commande)	Broche GPIO (ex: D9)
13	| R/W#	| Lecture/Écriture (doit être connecté à GND pour SPI)	GND
12 | E/RD#	| Activation/Lecture (doit être connecté à GND pour SPI)	GND
4-11| D0-D7	| Non utilisés en mode SPI 4 fils	Laisser déconnecté
Sauf |  | 
5	| D1	| Données SPI (SDIN/MOSI)	Broche MOSI (ex: D11)
6	| D0 | Horloge SPI (D0 sur certains modules)	Broche SCLK (ex: D13)

>[!TIP]
> Remarque : Les broches R/W# et E/RD# doivent généralement être connectées à la masse (GND) lorsque l'interface série est utilisée.\
> C'est assuré par les **pads BS**\
> [Arduino Example](https://forum.arduino.cc/t/arduino-uno-3-12inch-oled-display-256x64-spi-ssd1322/522847/2)

## Connexions Parallèles 8 bits (Interface Parallèle 8080)
Cette interface offre des transferts de données plus rapides mais nécessite plus de broches.

Broche OLED | Nom du signal |	Description
--- | --- | ---
1 |	GND	| Masse	GND
2	| VCC	| Alimentation positive (3,3 V - 5 V)
15 | RES# | Réinitialisation (actif bas)
16 |	CS#	| Sélection de puce (actif bas)
14 | D/C# |	Sélection Données/Commande
13 | R/W#	| Signal d'écriture (actif bas)
12 | E/RD#	| Signal de lecture (actif bas)
4.11| D0-D7 |	Bus de données 8 bits
<!--
-->
>[!NOTE]
> Remarque : De nombreux modules sont configurés par défaut pour une interface parallèle 8 bits.\
> Vous devrez peut-être modifier des résistances de configuration sur le module pour passer en mode SPI si nécessaire.

>[!IMPORTANT]
> Points de vigilance
>
>    **Tension** : L'écran est un appareil 3,3 V. Si vous utilisez un microcontrôleur 5 V (comme un Arduino Uno/Nano standard), 
>    vous devez utiliser un décaleur de niveau de tension (level shifter) pour éviter d'endommager l'écran.
>    Les modules modernes incluent souvent un décaleur intégré.
>
>    **Bibliothèque** : Des bibliothèques comme U8g2 (pour Arduino) gèrent très bien ces écrans et leurs différentes configurations d'interface.
>    [Arduino Example](https://forum.arduino.cc/t/arduino-uno-3-12inch-oled-display-256x64-spi-ssd1322/522847/2)
