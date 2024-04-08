#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
// Include something for MPU6050

#include "pins.h"

RF24 radio(PIN_RF_CE, PIN_RF_CSN);

void setup() {

  // Setup LEDs
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_LED3, OUTPUT);
  pinMode(PIN_LED4, OUTPUT);

  // Setup motors
  pinMode(PIN_MOTOR1, OUTPUT);
  pinMode(PIN_MOTOR2, OUTPUT);
  pinMode(PIN_MOTOR3, OUTPUT);
  pinMode(PIN_MOTOR4, OUTPUT);

  // Setup radio
  radio.begin();
  radio.setChannel(5);
  radio.setDataRate (RF24_1MBPS);
  radio.setPALevel(RF24_PA_HIGH);
  radio.openReadingPipe (1, 0x7878787878LL);
  radio.startListening();

  // Setup MPU
  // ---

  // Setup ---
  // ---
}

void loop() {

}
