#include "motherboard.h"

Motherboard::Motherboard()
{

    m_socket = "NOSOCKET";
    m_slot_ram = "NOSLOTRAM";
    m_slot_videocard = "NOSLOTVIDEOCARD";
}

void Motherboard::showInfoMotherboard()
{
    cout << "Motherboard: " << endl;
    cout << "\tName:" << getName() << endl;
    cout << "\tSocket: " << getSocket() << endl;
    cout << "\tSlot RAM: " << getSlotRam() << endl;
    cout << "\tSlot videocard: " << getSlotVideocard() << endl << endl;
}
