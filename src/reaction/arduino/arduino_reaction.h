#ifndef __ARP_ARDUINO_REACTION__
#define __ARP_ARDUINO_REACTION__

#include "../../defines.h"
#include "../reaction.h"

namespace arp
{
    class Node;

    class ArduinoReaction: public Reaction
    {
        public:
            ArduinoReaction(Node *node, uint8_t identifier);
            virtual ~ArduinoReaction();

        protected:
            virtual void TriggerUp();
            virtual void TriggerDown();

        private:
            uint8_t arduinoIdentifier;

            ArduinoReaction(const ArduinoReaction&);
            ArduinoReaction& operator=(const ArduinoReaction&);
    };
}

#endif //__ARP_ARDUINO_REACTION__
