#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#define PIN_LED 3
#define PIN_CE  10
#define PIN_CSN 9

RF24 radio(PIN_CE, PIN_CSN);

void setup() {

  // Setup radio
  pinMode(PIN_LED, OUTPUT);
  radio.begin();
  radio.setChannel(5);
  radio.setDataRate (RF24_1MBPS);
  radio.setPALevel(RF24_PA_HIGH);
  radio.openReadingPipe (1, 0x7878787878LL);
  radio.startListening();

  // ---
}

void loop() {

}
