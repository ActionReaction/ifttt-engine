#include "arduino_listener.h"

#include "arduino.h"
#include "../action/arduino/arduino_action.h"

namespace arp
{
    ArduinoListener *ArduinoListener::listener = NULL;

    ArduinoListener::~ArduinoListener()
    {
        Clear();
    }

    ArduinoListener& ArduinoListener::GetSingleton()
    {
        if(listener == NULL)
        {
            listener = new ArduinoListener();
        }

        return *listener;
    }

    void ArduinoListener::Update()
    {
        // 1. check for message
        // to read.. use ReadArduino(buffer)

        // 2. if message.. HARDCODED LOGIC:
        uint8_t hardcodedBuffer[2];
        actions[hardcodedBuffer[0]]->SetOutput(hardcodedBuffer[0] == 1);
    }

    void ArduinoListener::RegisterAction(uint8_t identifier, ArduinoAction* action)
    {
        actions[identifier] = action;
    }

    void ArduinoListener::Clear()
    {
        actions.clear();
    }

    ArduinoListener::ArduinoListener() {}
}