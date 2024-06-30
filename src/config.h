#pragma once

// PN532 pins
#define PN532_IRQ 22
#define PN532_RST 21  // Must be connected to RSTPDN pin, not RSTO!
#define PN532_SDA 25
#define PN532_SCL 26

// Debug serial
#define DEBUG_SERIAL Serial

// Output serial
#define OUTPUT_SERIAL Serial
#define OUTPUT_SERIAL_SPEED 115200

// Dial pins
#define DIAL_INT 1
#define DIAL_PULSE 2

// Beeper
#define BEEPER 19

// LED
#define LED_DATA_PIN 12
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB

// WiFi
#define WIFI_SSID "betman"
#define WIFI_PASSWORD SECRET_WIFI_PASSWORD