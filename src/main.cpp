#include "arp.h"

#include <iostream>

int main(int argc, char* argv[])
{
    arp::Arp
        *arp;

    arp = new arp::Arp();

    arp->CreateSchematic();

    while(true)
    {
        arp->Update(20); // TODO: replace by real delta_time
    }

    delete arp;
    return 1;
}