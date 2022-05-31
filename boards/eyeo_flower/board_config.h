#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "IDEO"
#define PRODUCT_NAME "Eyeo Flower"
#define VOLUME_LABEL "FLOWERBOOT"
#define INDEX_URL "https://github.com/ideo/eyeo-flower"
#define BOARD_ID "SAMD21E17D-Flower-v0"

#define USB_VID 0x1209
#define USB_PID 0xE7E0

#define LED_PIN PIN_PA10
//#define LED_TX_PIN PIN_PA27
//#define LED_RX_PIN PIN_PB03

#define BOARD_RGBLED_CLOCK_PIN            PIN_PA01
#define BOARD_RGBLED_DATA_PIN             PIN_PA00

#define FLASH_NUM_ROWS 512

#endif
