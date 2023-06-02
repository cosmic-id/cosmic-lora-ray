# LoRa Point to Point

## Topology

![LoRa Point to Point](assets/point-to-point.png "LoRa Point-to-Point")

## Requirements

* 2x [Cosmic LoRa Ray](https://www.tokopedia.com/cosmic-iot/lora-arduino-development-board-915mhz-915-mhz-antenna-charger)
* 2x Micro USB Type B Cable for LoRa Ray V1 or 2x USB Type C for LoRa Ray V3
* [Arduino IDE](https://www.arduino.cc/en/software)

## Prerequisite

* [Install CH340 Driver](https://sparks.gogo.co.nz/ch340.html)
* [Install LoRa Library](https://github.com/sandeepmistry/arduino-LoRa)

## Source Codes

* [Transmitter](examples/LoRa_P2P_Transmitter/LoRa_P2P_Transmitter.ino)
* [Receiver](examples/LoRa_P2P_Receiver/LoRa_P2P_Receiver.ino)

## Step by Step

1. Plug the Cosmic LoRa Ray boards to your Laptop.
2. COM Port should be activated. (If not activated? [Install CH340 driver](https://sparks.gogo.co.nz/ch340.html)).
3. Setup in Arduino IDE :
   * Pick the appropriate board : Tools -> Board -> **Arduino Pro or Pro Mini**
   * Pick the appropriate processor : Tools -> Board -> **ATMega 328P (3.3V 8 MHz)**
4. Setup Transmitter
   * Load [Transmitter code](examples/LoRa_P2P_Transmitter/LoRa_P2P_Transmitter.ino) to Arduino IDE.
   * Click Verify then Click Upload to Board. (Error compile? [Install LoRa Library](https://github.com/sandeepmistry/arduino-LoRa))
   * Open Serial Monitor of Arduino IDE. Set the Baud Rate as stated in Serial.begin of the transmitter code. Some debug info should be appeared stated it transmits some data.
5. Setup Receiver
   * Load [Receiver code](examples/LoRa_P2P_Receiver/LoRa_P2P_Receiver.ino) to Arduino IDE.
   * Click Verify then Click Upload to Board.
   * Open Serial Monitor of Arduino IDE. Set the Baud Rate as stated in Serial.begin of the receiver code. Some debug info should be appeared stated it recieves some data.
6. YEEAAYY Congrattzz!! You are sending LoRa Point-to-Point.
