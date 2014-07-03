#include "switch.h"

namespace arp
{
    Switch::Switch(Node* node, bool initial_state)
        : Node()
        , child(node)
        , previousState(false)
        , currentState(initial_state) {}

    Switch::~Switch() {}

    bool Switch::GetOutput()
    {
        bool
            output,
            ok;

        output = child->GetOutput();

        if(output && !previousState)
        {
            currentState = !currentState;
        }

        previousState = output;
        return ok;
    }
}

