#include <Arduino.h>

String incomingMessage = ""; // for incoming serial data

void setup()
{
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop()
{
    // send data only when you receive data:
    if (Serial.available() > 0)
    {
        // read the incoming message:
        incomingMessage = Serial.readString();

        // say what you got:
        Serial.print("I received: ");
        Serial.println(incomingMessage);
    }
}