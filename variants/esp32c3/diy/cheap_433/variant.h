
#define MY_NODE_ID      0xdead0433

#define BUTTON_PIN      9   // BOOT BTN
#define LED_PIN         12  // LED D4

#define DEBUG_MUTE      1


// I2C
#define I2C_SDA         3
#define I2C_SCL         2

// GPS
#define HAS_GPS         0

// LORA
#define USE_RF95 // RFM95/SX127x
#define LORA_CS         7
#define LORA_SCK        4
#define LORA_MOSI       6
#define LORA_MISO       5
#define LORA_RESET      11
#define LORA_DIO0       10
#define TX_GAIN_LORA    0

#define LORA_DIO1 RADIOLIB_NC
#define LORA_DIO2 RADIOLIB_NC