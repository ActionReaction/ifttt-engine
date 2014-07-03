#ifndef __ARP_DEFINES__
#define __ARP_DEFINES__

namespace arp
{
    // (unsigned) integer types having exactly the specified width

    typedef char                    int8_t;
    typedef int                     int16_t;
    typedef long int                int32_t;
    typedef long long int           int64_t;

    typedef unsigned char           uint8_t;
    typedef unsigned int            uint16_t;
    typedef unsigned long int       uint32_t;
    typedef unsigned long long int  uint64_t;

    typedef int32_t                 ms_t;

    #define FOR_LOOP_START(size)    for(int32_t i = 0; i < size; ++i) {
    #define FOR_LOOP_END            }

    #define IS_NOT_NULL_START(obj)  if(obj != NULL) {
    #define IS_NOT_NULL_END         }

    #ifndef NULL
        #define NULL                    0
    #endif
}

#endif // __ARP_DEFINES__