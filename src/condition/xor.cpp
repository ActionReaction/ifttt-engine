#include "xor.h"

namespace arp
{
    Xor::Xor(Node *a, Node *b)
        : Node()
    {
        children[0] = a;
        children[1] = b;
    }

    Xor::~Xor() {}

    bool Xor::GetOutput()
    {
        return children[0]->GetOutput() != children[1]->GetOutput();
    }
}