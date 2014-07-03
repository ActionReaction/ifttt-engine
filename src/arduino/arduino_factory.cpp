#include "arduino_factory.h"

namespace arp
{
    ArduinoAction* CreateArduinoButton(
        std::vector<uint8_t> &parameters,
        uint8_t identifier,
        uint8_t pin,
        uint8_t mode
        )
    {
        ArduinoAction
            *action;

        parameters.push_back(ARDUINO_MODULE_ID_BUTTON);
        parameters.push_back(identifier);
        parameters.push_back(pin);
        parameters.push_back(mode);

        action = new ArduinoAction();
        ARDUINO_LISTENER.RegisterAction(identifier, action);

        return action;
    }

    ArduinoReaction* CreateArduinoLED(
        std::vector<uint8_t> &parameters,
        Node *node,
        uint8_t identifier,
        uint8_t pin
        )
    {
        ArduinoReaction
            *reaction;

        parameters.push_back(ARDUINO_MODULE_ID_LED);
        parameters.push_back(identifier);
        parameters.push_back(pin);

        reaction = new ArduinoReaction(node, identifier);

        return reaction;
    }
}