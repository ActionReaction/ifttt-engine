#ifndef __ARP_CONDITION_XOR__
#define __ARP_CONDITION_XOR__

#include "../defines.h"
#include "../node.h"

namespace arp
{
    class Xor: public Node
    {
        public:
            Xor(Node *a, Node *b);
            virtual ~Xor();

            virtual bool GetOutput();

        private:
            Node* children[2];

            Xor(const Xor&);
            Xor& operator=(const Xor&);
    };
}

#endif //__ARP_CONDITION_XOR__
