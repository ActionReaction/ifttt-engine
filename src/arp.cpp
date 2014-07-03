#include "arp.h"
#include "factory.h"

#include "condition/condition_factory.h"
#include "arduino/arduino_factory.h"

#include <functional>

namespace arp
{
    bool Arp::SCHEMATIC_IS_READY = false;
    Arp* ActionReactionProgram = NULL;

    void OnBegin(const happyhttp::Response* r, void* userdata)
    {
        std::cout << "Reading begins...\n";
    }

    void OnData(
        const happyhttp::Response* r,
        void* userdata,
        const unsigned char* data,
        int n
        )
    {
        std::cout << "reading...\n";

        char *endptr;
        JsonValue value;
        JsonAllocator allocator;
        JsonParseStatus status = jsonParse((char*)data, &endptr, &value, allocator);
        if (status != JSON_PARSE_OK) {
            fprintf(stderr, "error at %zd, status: %d\n", endptr - (char*)data, status);
            exit(EXIT_FAILURE);
        } else { // SUCCESS
            switch (value.getTag()) {
            case JSON_TAG_NUMBER:
                printf("%g\n", value.toNumber());
                break;
            case JSON_TAG_BOOL:
                printf("%s\n", value.toBool() ? "true" : "false");
                break;
            case JSON_TAG_STRING:
                printf("\"%s\"\n", value.toString());
                break;
            case JSON_TAG_ARRAY:
                for (auto i : value) {
                    auto bleh = i->value;
                }
                break;
            case JSON_TAG_OBJECT:
                for (auto i : value) {
                    printf("%s = ", i->key);
                }
                break;
            case JSON_TAG_NULL:
                printf("null\n");
                break;
            }
        }
    }

    void OnComplete(const happyhttp::Response* r, void* userdata)
    {
        Arp::SCHEMATIC_IS_READY = true;
        std::cout << "Reading ends...\n";
    }

    Arp::Arp()
    {
        factory = new Factory();
    }

    Arp::~Arp()
    {
        delete factory;
    }

    void Arp::Update(ms_t dt)
    {
        factory->Update(dt);
    }

    void Arp::CreateSchematic()
    {
        ActionReactionProgram = this;

        happyhttp::Connection conn( "192.168.1.106", 9000 );
        conn.setcallbacks(OnBegin, OnData, OnComplete, 0);
        
        const char* params = "";
        int l = strlen(params);
        
        conn.putrequest("GET", "/api/schematic");
        conn.endheaders();
        conn.send( (const unsigned char*)params, l );

        while(conn.outstanding())
        {
            conn.pump();
        }

        while(!SCHEMATIC_IS_READY) {}

        std::cout << "Schematic is created!\n";

        // parse json file

        // factory->Create(1, 1); //define size nodes and realtime nodes

        // arduino nodes via ArduinoFactory :)

        // create all nodes correctly
    }
}