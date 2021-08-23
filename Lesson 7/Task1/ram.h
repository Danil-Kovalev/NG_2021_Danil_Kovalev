#ifndef RAM_H
#define RAM_H
#include "component.h"



class RAM : public Component
{
public:
    RAM();

    void setFrequency (float frequency);
    float getFrequency () {return m_frequency;}

    void setSlot (string slot) {m_slot = slot;}
    string getSlot () {return m_slot;}

    void showInfoRAM();

private:
    string m_slot;
    float m_frequency;

};

#endif // RAM_H
