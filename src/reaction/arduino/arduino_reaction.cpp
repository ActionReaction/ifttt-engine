#include "arduino_reaction.h"

#include "../../arduino/arduino.h"

namespace arp
{
    ArduinoReaction::ArduinoReaction(Node *node, uint8_t identifier)
        : Reaction(node)
        , arduinoIdentifier(identifier)
    {
    }

    ArduinoReaction::~ArduinoReaction() {}

    void ArduinoReaction::TriggerUp()
    {
        uint8_t buffer[3] = { arduinoIdentifier, 1, '\n' };
        WriteArduino(buffer);
    }

    void ArduinoReaction::TriggerDown()
    {
        uint8_t buffer[3] = { arduinoIdentifier, 0, '\n' };
        WriteArduino(buffer);
    }
}