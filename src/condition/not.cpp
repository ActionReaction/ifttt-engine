#include "not.h"

namespace arp
{
    Not::Not(Node* node)
        : Node()
        , child(node) {}

    Not::~Not() {}

    bool Not::GetOutput()
    {
        return !child->GetOutput();
    }
}

