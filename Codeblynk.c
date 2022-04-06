// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPLAAN3Tmis"
#define BLYNK_DEVICE_NAME "Led Blink"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_WROVER_BOARD
//#define USE_TTGO_T7

#include "BlynkEdgent.h"


BLYNK_WRITE(V0)
{
  int pinValue = param.asInt();
  digitalWrite(15,pinValue);  
}


void setup()
{
  Serial.begin(115200);
  delay(2000);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
