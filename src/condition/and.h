#ifndef __ARP_CONDITION_AND__
#define __ARP_CONDITION_AND__

#include "condition.h"

namespace arp
{
    class And: public Condition
    {
        public:
            And(Node** nodes, int32_t n);
            virtual ~And();

            virtual bool GetOutput();

        private:
            And(const And&);
            And& operator=(const And&);
    };
}

#endif //__ARP_CONDITION_AND__
