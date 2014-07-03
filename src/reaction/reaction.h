#ifndef __ARP_REACTION__
#define __ARP_REACTION__

#include "../defines.h"

namespace arp
{
    class Node;

    class Reaction
    {
        public:
            virtual ~Reaction();

            void Update(ms_t dt);

        protected:
            Reaction(Node *node);
            virtual void TriggerUp() = 0;
            virtual void TriggerDown() = 0;

        private:
            bool state;
            Node* input;

            Reaction(const Reaction&);
            Reaction& operator=(const Reaction&);
    };
}

#endif //__ARP_REACTION__
