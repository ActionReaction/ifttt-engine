#ifndef __ARP_ARP__
#define __ARP_ARP__

#include "defines.h"

#include "lib/happyhttp.h"
#include <cstdio>
#include <cstring>
#include <iostream>
#include "lib/gason.h"
using namespace std;

namespace arp
{
    class Factory;

    class Arp
    {
        public:
            Arp();
            ~Arp();

            void Update(ms_t dt);
            void CreateSchematic();

            // todo: help functions to create it...

            static bool SCHEMATIC_IS_READY;

        private:
            Factory *factory;
    };
}

#endif //__ARP_ARP__