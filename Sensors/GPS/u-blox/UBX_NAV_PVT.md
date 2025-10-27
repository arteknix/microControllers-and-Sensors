# UBX NAV_PVT 
:warning: _little endian hex_ *

_the total length of the sentence is 102 hex bytes_ : 
> header 6 + payload 92 + checksums 4
  
| | offset | type | size * | val / unit | comment |
| --- |--- | --- | --- | --- | --- |
| | -6 | preamble | 2 | B5 62 | message
| | -4 | headers | 4 | 01 07 5C 00 | 
| --- |--- | --- | --- | --- | --- |
| buffer | 0 | payload | 92 | 0x005C | |
| 4 | 0|itow|U4||time
| 8 | 4|year|U2||
| 10 | 6|month|U1||
| 11 |7|day|U1||
| 12 |8|hour|U1||
| 13 |9|minute|U1||
| 14 |10|second|U1||
| 15 |11|validity|X1||
| 16 |12|tAcc|U4||
| 20 |16|nano|I4||
| 24 |20|fix_type|U1||sats
| 25 |21|fix flags 1 #|X1||
| 26 |22|fix flags 2 #|X1||
| 27 |23|num sats|U1||
| 28 |24|lon|I4|1 e-7 deg|nav
| 32 |28|lat|I4|1 e-7 deg|
| 36 |32|height|I4|mm|
| 40 |36|hMSL|I4|mm|
| 44 |40|hAcc|U4|mm|
| 48 |44|vAcc|U4|mm|
| 52 |48|velN|I4|mm/s|
| 56 |52|velE|I4|mm/s|
| 60 |56|velD|I4|mm/s|
| 64 |60|gSpeed|I4|mm/s|
| 68 |64|headMot|I4|1 e-5 deg|
| 72 |68|sAcc|U4|mm/s|
| 76 |72|headAcc|U4|1 e-5 deg|
| 80 |76|pDOP|U2|0.01|
| 82 |78|flags3 #|X2||
| 84 |80|reserved|U1[4]||
| 88 |84|headVeh|I4|1 e-5 deg|mag
| 92 |88|madDec|I2|1 e-2 deg|
| 94 |90|magAcc|U2|1 e-2 deg|
| 96 |92||||total

*[decoding howto](ubx_decoding.md) 

#[Information on Flags in pdf](u-blox_UBX_NAV_PVT_InterfaceDescription.pdf)

