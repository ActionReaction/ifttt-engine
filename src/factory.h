#ifndef __ARP_FACTORY__
#define __ARP_FACTORY__

#include "defines.h"

namespace arp
{
    class Node;
    class Reaction;

    class Factory
    {
        public:
            Factory();
            ~Factory();

            void Clear();
            void Create(int32_t n, int32_t r);

            void Update(ms_t dt);

            void AddNode(Node *node);
            void AddReaction(Reaction *reaction);

        private:
            Node **nodes;
            Reaction **reactions;

            int32_t nodeCount, nodeSize, reactionCount, reactionSize;

            Factory(const Factory&);
            Factory& operator=(const Factory&);
    };
}

#endif //__ARP_FACTORY__