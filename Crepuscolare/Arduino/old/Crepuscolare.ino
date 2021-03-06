/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

 This example code is in the public domain.
 */


int THR_Pin         = A0;   // select the input pin for the potentiometer
int THR_Value       = 0;    // valore analogico del potenziometro

int LDR_Pin         = A3;   // select the input pin for the LDR
int LDR_Value       = 0;    // valore analogico LDR

int LED             = 5;   // select the pin for the LED (13 e' quello incorporato)
int Relay           = 3;

int debounce       = 0;
#define LOOPTIME   250  // mSecondi
// #define DEBOUCE     3*(1000/LOOPTIME)
#define DEBOUNCE     15

// the setup routine runs once when you press reset:
void setup() {
    pinMode(LED, OUTPUT);
    pinMode(Relay, OUTPUT);
    digitalWrite(LED, LOW);
    digitalWrite(Relay, LOW);
    // initialize serial communication at 9600 bits per second:
    Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {

        // ------------------------------------
        // - leggi i due pin analogici
        // ------------------------------------
    LDR_Value = readAnalogPin(LDR_Pin);
    THR_Value = readAnalogPin(THR_Pin);
    THR_Value = 1023-THR_Value;             //lo invertiamo per non invertire i fili del potenziometro.

    float LDR_Voltage = LDR_Value * (5.0 / 1023.0);
    float THR_Voltage = THR_Value * (5.0 / 1023.0);

        // *** SOLO per DEBUG
    Serial.print("LDR - Value :"); Serial.print(LDR_Value, DEC); Serial.print("  LDR - Volt     :"); Serial.println(LDR_Voltage, 2);
    Serial.print("THR - Value :"); Serial.print(THR_Value, DEC); Serial.print("  THR - Volt     :"); Serial.println(THR_Voltage, 2);

        // print out the value you read:
    if (LDR_Value > THR_Value) {
        if (debounce < DEBOUNCE)
            debounce += 1;

        Serial.print("  LED: "); Serial.print("ON ");Serial.print("  (debounce:");Serial.println(debounce);
    }
    else {
        if (debounce > 0)
            debounce -= 1;
        Serial.print("  LED: "); Serial.print("OFF ");Serial.print("  (debounce:");Serial.println(debounce);
    }
    Serial.println();

    if (debounce == DEBOUNCE) {
        if (digitalRead(LED)   == LOW)   digitalWrite(LED, HIGH);
        if (digitalRead(Relay) == LOW) digitalWrite(Relay, HIGH);
    }
    else if (debounce > 0) {
        if (digitalRead(LED) == HIGH) // read the input pin
            digitalWrite(LED, LOW);
        else
            digitalWrite(LED, HIGH);
    }
    else {
        debounce = 0;
        if (digitalRead(LED)   == HIGH)   digitalWrite(LED, LOW);
        if (digitalRead(Relay) == HIGH) digitalWrite(Relay, LOW);
    }



    delay(LOOPTIME); // in mSec
}



int readAnalogPin(int pin) {
const int MAX_READS = 10;
int readings[MAX_READS];           // the readings from the analog input
int readInx = 0;              // the index of the current reading
int totValue = 0;                  // the running totValue
int avgValue = 0;                // the avgValue
int MIN = 2000;
int MAX= 0;

        // Lettura del pin
    for (readInx = 0; readInx < MAX_READS; readInx++) {
        readings[readInx] = analogRead(pin);    // lettura pin

        // add the reading to the totValue:
        totValue = totValue + readings[readInx];
        delay(100);        // delay in between reads for stability
    }

    // calculate the avgValue:
    avgValue = totValue / MAX_READS;

        // DEBUG Display valori
    boolean fDEBUG = false;
    if (fDEBUG) {
        Serial.print("[PIN ");Serial.print(pin, HEX);Serial.print("] - ");
        for (readInx = 0; readInx < MAX_READS; readInx++) {
            Serial.print(" ");Serial.print(readings[readInx], DEC);
        }
        Serial.print(" avgValue = ");Serial.print(avgValue, DEC);
        float Voltage = avgValue * (5.0 / 1023.0);
        Serial.print(" Voltage = ");Serial.println(Voltage, 2);
        Serial.println();
    }
    #if 0
    #endif


    return avgValue;
}
