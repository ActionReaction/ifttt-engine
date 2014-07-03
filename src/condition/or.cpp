#include "or.h"

namespace arp
{
    Or::Or(Node** nodes, int32_t n)
        : Condition(nodes, n) {}

    Or::~Or() {}

    bool Or::GetOutput()
    {
        FOR_LOOP_START(size)
            if(children[i]->GetOutput())
            {
                return true;
            }
        FOR_LOOP_END
        return false;
    }
}