#ifndef __ARP_CONDITION_CONDITION__
#define __ARP_CONDITION_CONDITION__

#include "../defines.h"
#include "../node.h"

namespace arp
{
    class Condition: public Node
    {
        public:
            virtual ~Condition();

        protected:
            Condition(Node** nodes, int32_t n);

            Node** children;
            int32_t size;

        private:
            Condition(const Condition&);
            Condition& operator=(const Condition&);
    };
}

#endif //__ARP_CONDITION_CONDITION__
