#include "arduino_action.h"

namespace arp
{
    ArduinoAction::ArduinoAction()
        : Node()
        , state(false)
    {

    }

    ArduinoAction::~ArduinoAction() {}

    bool ArduinoAction::GetOutput()
    {
        return state;
    }

    void ArduinoAction::SetOutput(bool output)
    {
        state = output;
    }
}