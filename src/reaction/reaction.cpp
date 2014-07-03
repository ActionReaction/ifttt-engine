#include "reaction.h"

#include "../node.h"

namespace arp
{
    Reaction::Reaction(Node *node)
        : state(false)
        , input(node) {}

    Reaction::~Reaction() {}

    void Reaction::Update(ms_t dt)
    {
        bool
            output;

        output = input->GetOutput();
        if(output && !state)
        {
            TriggerUp();
        }
        else if(!output && state)
        {
            TriggerDown();
        }

        state = output;
    }
}