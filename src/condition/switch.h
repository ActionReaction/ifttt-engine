#ifndef __ARP_CONDITION_SWITCH__
#define __ARP_CONDITION_SWITCH__

#include "../defines.h"
#include "../node.h"

namespace arp
{
    class Switch: public Node
    {
        public:
            Switch(Node* node, bool initial_state);
            virtual ~Switch();

            virtual bool GetOutput();

        private:
            Node* child;
            bool previousState, currentState;

            Switch(const Switch&);
            Switch& operator=(const Switch&);
    };
}

#endif //__ARP_CONDITION_SWITCH__
