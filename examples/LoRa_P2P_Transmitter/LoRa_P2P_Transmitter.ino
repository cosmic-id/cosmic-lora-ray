/*********
  Modified from the examples of the Arduino LoRa library
  More resources: https://github.com/cosmic-id/
*********/

#include <SPI.h>
#include <LoRa.h>

// LoRa <-> Pro Mini Interface
#define LORA_RAY_NSS  10
#define LORA_RAY_RST  9
#define LORA_RAY_DIO0 2
#define LORA_RAY_DIO1 6

int counter = 0;

void setup() {
  //initialize Serial Monitor
  Serial.begin(115200);
  while (!Serial);
  Serial.println("LoRa Sender");

  //setup LoRa transceiver module
  LoRa.setPins(LORA_RAY_NSS, LORA_RAY_RST, LORA_RAY_DIO0);
  
  //replace the LoRa.begin(---E-) argument with your location's frequency
  //Indonesia 920.0 - 923.0 MHz 
  while (!LoRa.begin(920E6)) {
    Serial.println(".");
    delay(500);
  }
  
  // Change sync word (0xF3) to match the receiver
  // The sync word assures you don't get LoRa messages from other LoRa transceivers
  // ranges from 0-0xFF
  LoRa.setSyncWord(0xF3);
  Serial.println("LoRa Initializing OK!");
}

void loop() {
  Serial.print("Sending packet: ");
  Serial.println(counter);

  //Send LoRa packet to receiver
  LoRa.beginPacket();
  LoRa.print("hello ");
  LoRa.print(counter);
  LoRa.endPacket();

  counter++;

  delay(10000);
}
