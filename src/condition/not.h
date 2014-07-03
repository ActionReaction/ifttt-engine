#ifndef __ARP_CONDITION_NOT__
#define __ARP_CONDITION_NOT__

#include "../defines.h"
#include "../node.h"

namespace arp
{
    class Not: public Node
    {
        public:
            Not(Node* node);
            virtual ~Not();

            virtual bool GetOutput();

        private:
            Node* child;

            Not(const Not&);
            Not& operator=(const Not&);
    };
}

#endif //__ARP_CONDITION_NOT__
