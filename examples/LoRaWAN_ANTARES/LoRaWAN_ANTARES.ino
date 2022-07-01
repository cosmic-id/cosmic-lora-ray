#include <loraid.h>

long interval = 10000;    // 10 s interval to send message
long previousMillis = 0;  // will store last time message sent
unsigned int counter = 0;     // message counter

void setup() {
  // Setup loraid access
  lora.init();

  // Set LoRaWAN Class
  lora.setDeviceClass(CLASS_A);

  // Set Data Rate
  lora.setDataRate(2);
  
  // Put Antares Key and DevAddress here
  // ANTARES access key looks like : 656c38ca2c42ff5f:deb14e59ff2f15c8
  lora.setAccessKey("antares-access-key");
  // Device Address looks like : 0d01a1cd
  lora.setDeviceId("antares-device-address");
}

void loop() {
  // put your main code here, to run repeatedly:
  char myStr[50];
  char outStr[255];
  int recvStatus = 0;
  
  unsigned long currentMillis = millis();

  // Check interval overflow
  if(currentMillis - previousMillis > interval) {
    previousMillis = currentMillis; 

    sprintf(myStr, "Test 5", counter); 

    lora.sendToAntares((unsigned char *)myStr, strlen(myStr), 0);
  }

  recvStatus = lora.readData(outStr);
  if(recvStatus) {
    Serial.println(outStr);
  }
  
  // Check Lora RX
  lora.update();
}
