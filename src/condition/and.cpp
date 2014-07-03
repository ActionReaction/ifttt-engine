#include "and.h"

namespace arp
{
    And::And(Node** nodes, int32_t n)
        : Condition(nodes, n) {}

    And::~And() {}

    bool And::GetOutput()
    {
        FOR_LOOP_START(size)
            if(!children[i]->GetOutput())
            {
                return false;
            }
        FOR_LOOP_END
        return true;
    }
}