#pragma once 

#include "secrets.h"
#include "config.h"

// Debug
#define DEBUG_ENABLED

// LED
//redefine
#define NUM_LEDS    8
#define FIRST_LED 0
#define BRIGHTNESS  100


// WiFi
#define OTA_HOSTNAME "acs-reader-test"
#define OTA_PASSWORD SECRET_OTA_PASSWORD
#define OTA_PORT 3232

// MQTT
#define MQTT_HOST "hass.lan"
#define MQTT_USERNAME "acs-reader"
#define MQTT_TOPIC "acs-test"

