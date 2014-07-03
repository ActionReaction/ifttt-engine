#ifndef __ARP_ARDUINO_FACTORY__
#define __ARP_ARDUINO_FACTORY__

#include <vector>

#include "../defines.h"
#include "../action/arduino/arduino_action.h"
#include "../reaction/arduino/arduino_reaction.h"
#include "../node.h"

#include "arduino_listener.h"

namespace arp
{
    const uint8_t ARDUINO_BUTTON_MODE_HIGH = 1;
    const uint8_t ARDUINO_BUTTON_MODE_LOW  = 0;

    const uint8_t ARDUINO_MODULE_ID_BUTTON = 1;
    const uint8_t ARDUINO_MODULE_ID_LED    = 2;

    ArduinoAction* CreateArduinoButton(
        std::vector<uint8_t> &parameters,
        uint8_t identifier,
        uint8_t pin,
        uint8_t mode
        );

    ArduinoReaction* CreateArduinoLED(
        std::vector<uint8_t> &parameters,
        Node *node,
        uint8_t identifier,
        uint8_t pin
        );
}

#endif // __ARP_ARDUINO_FACTORY__