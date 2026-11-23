/* 
 * 4d_systems_esp32s3_gen4_r8n16
 * ILI9488 and XPT Touch
 * © ANC 260326
 *
 * Info from Arduino_GFX
 *
 */
/* SPI_PINs */
#define S_clk  47
#define S_mosi 21
#define S_miso GFX_NOT_DEFINED

/* LCD PINs */
// defined(ESP32) && (CONFIG_IDF_TARGET_ESP32S3)
#define TFT_CS 40 // GFX_NOT_DEFINED for display without CS pin
#define TFT_DC 41
#define TFT_RST 42
#define GFX_BL -1

/* DataBus */
// hardware SPI (default DataBus, comment below block if you are not using hardware SPI)
// defined(ESP32) && (CONFIG_IDF_TARGET_ESP32S2 || CONFIG_IDF_TARGET_ESP32S3)
//Arduino_DataBus *bus = new Arduino_ESP32SPI(TFT_DC, TFT_CS, 36 /* SCK */, 35 /* MOSI */, GFX_NOT_DEFINED /* MISO */, HSPI /* spi_num */);
//Arduino_DataBus *bus = new Arduino_ESP32SPI(TFT_DC, TFT_CS, 12 /* SCK */, 11 /* MOSI */, GFX_NOT_DEFINED /* MISO */, HSPI /* spi_num */);
Arduino_DataBus *bus = new Arduino_ESP32SPI(TFT_DC, TFT_CS, 47 /* SCK */, 21 /* MOSI */, GFX_NOT_DEFINED /* MISO */, HSPI /* spi_num */);

/* Display */
// ILI9488 SPI LCD 320x480
Arduino_GFX *gfx = new Arduino_ILI9488_18bit(bus, TFT_RST, 0 /* rotation */, false /* IPS */);


