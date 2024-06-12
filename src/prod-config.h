#pragma once

#include "config.h"
#include "secrets.h"

// Debug
//#define DEBUG_ENABLED

//LED
#define NUM_LEDS 7
#define FIRST_LED 1
#define BRIGHTNESS 255

// WiFi
#define OTA_HOSTNAME "acs-reader"
#define OTA_PASSWORD SECRET_OTA_PASSWORD
#define OTA_PORT 3232

// MQTT
#define MQTT_HOST "hass.lan"
#define MQTT_USERNAME "acs-reader"
#define MQTT_TOPIC "acs"
