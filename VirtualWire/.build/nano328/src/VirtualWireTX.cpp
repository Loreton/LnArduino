#include <Arduino.h>
#include <VirtualWire.h>
void setup();
void loop();
void RXprocess();
void TXprocess();
#line 1 "src/VirtualWireTX.ino"
/* FILE:    MXFS03V_433MHZ_MODULE_HCMODU0007_TRANSMIT_EXAMPLE.pde
   DATE:    03/03/13
   VERSION: 0.1
   AUTHOR:  Andrew Davies

FROM:   http://forum.hobbycomponents.com/viewtopic.php?f=25&t=1324

This is an example of how to use the 433MHz wireless transmitter module
(HCMODU0007) which is the Tx part of the tranmitter and receiver module pair.
This example makes use of the VirtualWire library written by Mike McCauley.
The sketch will read a value from the analogue input A0 and transmit it as
2 bytes to the receiver module once every second.

Tx MODULE CONNECTIONS:

PIN  DESCRIPTION      ARDUINO PIN
1    GND              GND
2    VCC (3.5-12V)    VCC
3    TX DATA          D2


You may copy, alter and reuse this code in any way you like, but please leave
reference to HobbyComponents.com in your comments if you redistribute this code.

THIS SOFTWARE IS PROVIDED "AS IS". HOBBY COMPONENTS LTD MAKES NO WARRANTIES, WHETHER
EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ACCURACY OR LACK OF NEGLIGENCE.
HOBBY COMPONENTS SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR ANY DAMAGES,
INCLUDING, BUT NOT LIMITED TO, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY
REASON WHATSOEVER.
*/


//Include the VirtualWire library
//#include <VirtualWire.h>
#define DR3100x

const int   LED               = 13;  // D13
uint8_t     RECEIVED_FLAG     = 0;

bool        I_AM_MASTER       = true;
// bool        I_AM_MASTER       = false;


// Digital IO pin that will be used for sending data to the transmitter
// la direzione viene impostata da VirtualWire.cpp
// const int   TX_Pin            = 12;   // D2 - Default D12
// const int   RX_Pin            = 11;   // D3 - Default D11
// const int   TX_Enable_pin     = 10;   // D9 - Default D10
// const int   TX_433MHz_Pin            = 12;   // D2 - Default D12
// const int   RX_433MHz_Pin            = 11;   // D3 - Default D11
#define     RX_433MHz_Pin              11    // D3 - Default D11
#define     TX_433MHz_Pin              12    // D2 - Default D12

void setup() {
    Serial.begin(9600);   // Debugging only
    Serial.println("setup");

        // Initialises the TX - RX pin used to send data to the Tx module
    vw_set_tx_pin(TX_433MHz_Pin);
    vw_set_rx_pin(RX_433MHz_Pin);

    // #if defined DR3100
        const int   TX_433MHz_Enable_pin     = 10;   // D9 - Default D10
        // Required for DR3100 - Set the transmit logic level (LOW = transmit for this version of module)
        // Loreto: I miei moduli non hanno il pin di ENA
        vw_set_ptt_inverted(true);
        vw_set_ptt_pin(TX_433MHz_Enable_pin);
    // #endif

    // vw_setup(10000);                // Bits per sec
    vw_setup(2000);                // Bits per sec
    vw_rx_start();                      // Start the receiver PLL running

    pinMode(LED, OUTPUT);
    if (I_AM_MASTER)
        Serial.print("I am 433MHz MASTER\r\n");
    else
        Serial.print("I am 433MHz SLAVE\r\n");
}

//#####################################################
//# - Main program
//#####################################################
void loop() {
    if (I_AM_MASTER) {
        TXprocess();
        delay(1000);
        RXprocess();
        delay(3000);
    }

    else {
        RXprocess();
        // if (RECEIVED_FLAG == true) {
            // delay(1000);
            // TXprocess();
        // }
    }
}


//#####################################################
//# RXprocess
//#####################################################
void RXprocess() {
    uint8_t buffSize = VW_MAX_MESSAGE_LEN;
    uint8_t RxBuffer[buffSize];
    uint8_t RECEIVED_FLAG;


    // Non-blocking
    RECEIVED_FLAG = vw_get_message(RxBuffer, &buffSize);
    if (RECEIVED_FLAG) {
        int i;

        digitalWrite(LED, true); // Flash a light to show received good message
            // Message with a good checksum received, dump it.
        Serial.print("Got: ");

        for (i = 0; i < buffSize; i++) {
            Serial.print(RxBuffer[i], HEX);
            Serial.print(" ");
        }

        Serial.println("");
        digitalWrite(LED, false);
    }
    // Serial.println("I am RX module");
    // return RECEIVED_FLAG;
}

//#####################################################
//# TXprocess
//#####################################################
void TXprocess() {
    uint8_t buffSize = VW_MAX_MESSAGE_LEN;
    // uint8_t TxBuffer[buffSize];

    const char *TxBuffer = "hello";


        // Turn on the LED on pin LED to indicate that we are about to transmit data
    digitalWrite(LED, HIGH);

    vw_send((uint8_t *)TxBuffer, strlen(TxBuffer));

        // Wait until the data has been sent
    vw_wait_tx();

        // Turn off the LED on pin LED to indicate that we have now sent the data
    digitalWrite(LED, LOW);
    Serial.print("String '"); Serial.print(TxBuffer); Serial.println("' has been sent.");

        // Do nothing for a second. Lower this delay to send data quicker
    // delay(1000);
}

