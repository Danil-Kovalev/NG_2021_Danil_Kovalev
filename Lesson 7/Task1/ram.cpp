#include "ram.h"

RAM::RAM()
{
    m_frequency = 1;
    m_slot = "NOSLOT";
}

void RAM::setFrequency(float frequency)
{
    if (frequency <= 0) {
        cout << "Frequency can`t be lower or equal 0";
        return;
    }
    m_frequency = frequency;
}

void RAM::showInfoRAM()
{
    cout << "RAM: " << endl;
    cout << "\tName: " << getName() << endl;
    cout << "\tSlot: " << getSlot() << endl;
    cout << "\tFrequency: " << getFrequency() << endl;
    cout << "\tPrice: " << getPrice() << endl << endl;
}
