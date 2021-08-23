#include "videocard.h"

Videocard::Videocard()
{
    m_frequency = 1;
    m_slot = "NOSLOT";

}

void Videocard::setFrequency(float frequency)
{
    if (frequency <= 0) {
        cout << "Frequency can`t be lower or equal 0";
        return;
    }
    m_frequency = frequency;
}

void Videocard::showInfoVideocard()
{
    cout << "Videocard: " << endl;
    cout << "\tName:" << getName() << endl;
    cout << "\tSlot: " << getSlot() << endl;
    cout << "\tFrequency: " << getFrequency() << endl;
    cout << "\tPrice: " << getPrice() << endl << endl;
}

