#ifndef __ARP_ARDUINO_LISTENER__
#define __ARP_ARDUINO_LISTENER__

#include <map>
#include "../defines.h"

namespace arp
{
    class ArduinoAction;

    class ArduinoListener
    {
        public:
            ~ArduinoListener();
            static ArduinoListener& GetSingleton();

            void Update();
            void RegisterAction(uint8_t identifier, ArduinoAction* action);
            void Clear();

        private:
            static ArduinoListener *listener;
            std::map<uint8_t, ArduinoAction*> actions;

            ArduinoListener();

            ArduinoListener(const ArduinoListener&);
            ArduinoListener& operator=(const ArduinoListener&);
    };

    #define ARDUINO_LISTENER ArduinoListener::GetSingleton()
}

#endif // __ARP_ARDUINO_LISTENER__