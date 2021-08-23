#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H
#include "component.h"



class Motherboard : public Component
{
public:
    Motherboard();

    void setSocket (string socket) {m_socket = socket;}
    string getSocket () {return m_socket;}

    void setSlotVideocard (string slotVideocard) {m_slot_videocard = slotVideocard;}
    string getSlotVideocard () {return m_slot_videocard;}

    void setSlotRam (string slotRam) {m_slot_ram = slotRam;}
    string getSlotRam () {return m_slot_ram;}

    void showInfoMotherboard ();

private:
    string m_socket;
    string m_slot_videocard;
    string m_slot_ram;
};

#endif // MOTHERBOARD_H
