
//#define MY_NODE_ID      0xc0ffee01 
#define MY_NODE_ID      0xdeadc0fe

#define BUTTON_PIN      9   // BOOT BTN
#define LED_PIN         -1
#define LED_BUILTIN     -1

#define DEBUG_MUTE      1

// If enabled remove from build_flags (platformio.info): 
//  -D MESHTASTIC_EXCLUDE_SCREEN=1
//  -D MESHTASTIC_EXCLUDE_I2C=1
//  -D MESHTASTIC_EXCLUDE_INPUTBROKER=1
#define HAS_SCREEN      0 

// I2C
#define I2C_SDA         3
#define I2C_SCL         4

// GPS
#define HAS_GPS         0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

// LORA
#define LORA_CS         5
#define LORA_SCK        6
#define LORA_MOSI       7
#define LORA_MISO       10
#define LORA_RESET      2
#define LORA_BUSY       20
#define LORA_DIO1       21
#define LORA_RXEN       8   //BLUE LED
#define LORA_DIO0       RADIOLIB_NC

#define USE_SX1262

#define SX126X_CS       LORA_CS
#define SX126X_DIO1     LORA_DIO1
#define SX126X_BUSY     LORA_BUSY
#define SX126X_RESET    LORA_RESET
#define SX126X_RXEN     LORA_RXEN 
#define SX126X_DIO2_AS_RF_SWITCH // DIO2 and TXEN connected
#define SX126X_MAX_POWER    22
#define TX_GAIN_LORA        8

#define USE_LLCC68    

// FAKE LLCC68 E220-900M22S 
// @see https://github.com/jgromes/RadioLib/issues/1329
//#define SX126X_XTAL_FORCE   1 

// EBYTE_E22
// Internally the TTGO module hooks the SX126x-DIO2 in to control the TX/RX switch
// (which is the default for the sx1262interface code)
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL // make it so that the firmware can try both TCXO and XTAL
