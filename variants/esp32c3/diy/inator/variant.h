#define BUTTON_PIN 9    // BOOT BTN
#define LED_PIN 13      // LED D5

#define I2C_SDA 2
#define I2C_SCL 3

// GPS
#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

#define LORA_SCK 4
#define LORA_MISO 5
#define LORA_MOSI 6
#define LORA_CS 7
#define LORA_BUSY 8
#define LORA_RESET 11
#define LORA_RXEN 12    // LED D4
#define LORA_DIO0 RADIOLIB_NC
#define LORA_DIO1 10    // IRQ
#define LORA_DIO2 RADIOLIB_NC

#define USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_BUSY
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN LORA_RXEN 
#define SX126X_DIO2_AS_RF_SWITCH

#ifdef EBYTE_E22
// Internally the TTGO module hooks the SX126x-DIO2 in to control the TX/RX switch
// (which is the default for the sx1262interface code)
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL // make it so that the firmware can try both TCXO and XTAL
#endif

