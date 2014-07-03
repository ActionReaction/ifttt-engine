#include "condition.h"

namespace arp
{
    Condition::~Condition() {}

    Condition::Condition(Node** nodes, int32_t n)
        : Node()
    {
        children = nodes;
        size = n;
    }
}
