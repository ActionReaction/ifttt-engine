#ifndef __ARP_CONDITION_OR__
#define __ARP_CONDITION_OR__

#include "condition.h"

namespace arp
{
    class Or: public Condition
    {
        public:
            Or(Node** nodes, int32_t n);
            virtual ~Or();

            virtual bool GetOutput();

        private:
            Or(const Or&);
            Or& operator=(const Or&);
    };
}

#endif //__ARP_CONDITION_OR__
