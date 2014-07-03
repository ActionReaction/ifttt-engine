#ifndef __ARP_CONDITION_ONCE__
#define __ARP_CONDITION_ONCE__

#include "../defines.h"
#include "../node.h"

namespace arp
{
    class Once: public Node
    {
        public:
            Once(Node* node);
            virtual ~Once();

            virtual bool GetOutput();

        private:
            Node* child;
            bool previousState;

            Once(const Once&);
            Once& operator=(const Once&);
    };
}

#endif //__ARP_CONDITION_ONCE__
