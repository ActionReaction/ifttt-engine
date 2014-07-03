#ifndef __ARP_NODE__
#define __ARP_NODE__

namespace arp
{
    class Node
    {
        public:
            virtual ~Node() {}

            virtual bool GetOutput() = 0;

        protected:
            Node() {}

        private:
            Node(const Node&);
            Node& operator=(const Node&);
    };
}

#endif //__ARP_NODE__