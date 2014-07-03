#ifndef __ARP_ACTION_ARDUINO_ACTION__
#define __ARP_ACTION_ARDUINO_ACTION__

#include "../../node.h"

namespace arp
{
    class ArduinoAction: Node
    {
        public:
            ArduinoAction();
            virtual ~ArduinoAction();

            virtual bool GetOutput();

            void SetOutput(bool output);

        private:
            bool state;

            ArduinoAction(const ArduinoAction&);
            ArduinoAction& operator=(const ArduinoAction&);
    };
}

#endif //__ARP_ACTION_ARDUINO_ACTION__
