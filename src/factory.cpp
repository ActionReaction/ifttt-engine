#include "factory.h"

#include "node.h"
#include "reaction/reaction.h"

namespace arp
{
    Factory::Factory()
        : nodes(NULL)
        , reactions(NULL)
        , nodeSize(0)
        , nodeCount(0)
        , reactionSize(0)
        , reactionCount(0)
    {
    }

    Factory::~Factory()
    {
        Clear();
    }

    void Factory::Create(int32_t n, int32_t r)
    {
        IS_NOT_NULL_START(nodes)
            Clear();
        IS_NOT_NULL_END

        nodes = new Node*[n];
        reactions = new Reaction*[r];

        nodeSize = n;
        reactionSize = r;
    }

    void Factory::Clear()
    {
        FOR_LOOP_START(nodeCount)
            delete nodes[i];
        FOR_LOOP_END

        delete [] nodes;
        nodes = NULL;

        nodeSize = 0;
        nodeCount = 0;

        FOR_LOOP_START(reactionCount)
            delete reactions[i];
        FOR_LOOP_END

        delete [] reactions;
        reactions = NULL;

        reactionSize = 0;
        reactionCount = 0;
    }

    void Factory::Update(ms_t dt)
    {
        IS_NOT_NULL_START(reactions)
            FOR_LOOP_START(reactionCount)
                reactions[i]->Update(dt);
            FOR_LOOP_END
        IS_NOT_NULL_END
    }

    void Factory::AddNode(Node *node)
    {
        nodes[nodeCount++] = node;
    }
}