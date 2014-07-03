#ifndef __ARP_ARDUINO__
#define __ARP_ARDUINO__

#include "../defines.h"

namespace arp
{
    void ReadArduino(uint8_t *buffer);
    void WriteArduino(uint8_t *buffer);
}

#endif // __ARP_ARDUINO__