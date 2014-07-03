#include "once.h"

namespace arp
{
    Once::Once(Node* node)
        : Node()
        , child(node)
        , previousState(false) {}

    Once::~Once() {}

    bool Once::GetOutput()
    {
        bool
            output,
            ok;

        output = child->GetOutput();
        ok = output && !previousState;
        previousState = output;
        return ok;
    }
}

