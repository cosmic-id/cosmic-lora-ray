# Cosmic LoRa Ray

## Pendahuluan

Cosmic LoRa Ray adalah Development Board Entry-Level dari Cosmic.id yang memudahkan kamu dalam pengembangan aplikasi IoT. Cosmic LoRa Ray dibekali dengan mikrokontroller hemat daya Pro Mini 3.3V 8Mhz. Tegangan kerja 3.3V memungkinkan perangkat ini disupply dari solar panel ataupun rechargeable LiPo battery. Dev Board ini telah dibekali dengan modul komunikasi LoRa berbasis Chip RFM95W yang bekerja di Frekuensi 915. Namun kamu ga usah khawatir karena chip ini bisa diconfig pada range 902-928MHz. Dev Board ini juga sudah dilengkapi dengan on-board charger LiPo yang dari sumber power USB dan DC Jack.

> "Ray" memiliki arti sinar. Seluruh product line Cosmic berbasis nama-nama yang ada di alam semesta.

[Documentation in English](https://github.com/farizalemuda/cosmic-lora-ray)

## Spesifikasi Teknis

| Fitur                   |                    Nilai                |  
| ----------------------- | --------------------------------------- |
| Microcontroller         |                    Atmega 328P          |
| Bootloader              |                    Pro Mini             |
| Clock Speed             |                    8 MHz                |
| Dig. Input Voltage      |                    3.3 V                |
| Dig. Output Voltage     |                    3.3 V                |
| Analog Input Voltage    |                    3.3 V                |
| Analog Digital Converter Resolution     |    10 bit               |
| Max Output Current      |                    600 mA               |
| Charging Rate           |                    200 mA               |
| LoRa(WAN) Chip          |                    RFM95W               |
| LoRa(WAN) Base Freq     |                    915 MHz              |
| LoRa(WAN) Freq Range    |                    902-928 MHz          |
| Antenna Impedance       |                    50 Ohm               |
| Available I/O           |                    5 AI - 5 DO - 1 SPI - 1 UART - 1 I2C |
| Length                  |                    68.58mm              |
| Width                   |                    53.34mm              |
| Weight                  |                    19g                  |

## Dokumentasi

### Tata Letak Pin

> Klik gambar untuk gambar yang lebih detail

[![Cosmic LoRa Ray Pinout](assets/pin-diagram.webp)](assets/pin-diagram.jpg "Cosmic LoRa Ray Pinout")

### Interkoneksi Board dan LoRa(WAN) Chip

| Cosmic LoRa Ray   | RFM95W |  
|-------------------|------- |
| D11               | MOSI   |
| D12               | MISO   |
| D13               | SCK    |
| D10               | NSS    |
| D9                | RST    |
| D2                | DIO0   |
| D6                | DIO1   |
| D7                | DIO2   |

### Contoh Program

* [LoRa Point-to-Point](../LoRa-P2P.md)
* LoRaWAN [ANTARES](../examples/LoRaWAN_ANTARES/LoRaWAN_ANTARES.ino)

## Regulasi

[Peraturan Direktorat Jendral (Dirjen) Sumber Daya Dan Perangkat Pos Dan Informatika (SDPPI) No. 3 Tahun 2019](https://web.kominfo.go.id/sites/default/files/users/3997/PERDIRJEN%20SDPPI%20NO%203%20TAHUN%202019%20LPWA.pdf) telah mengatur terkait Frekuensi LoRa di Indonesia pada rentang frekuensi 920-923MHz.

## FAQ

Sedang dikerjakan
