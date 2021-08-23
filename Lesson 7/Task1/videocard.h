#ifndef VIDEOCARD_H
#define VIDEOCARD_H
#include "component.h"



class Videocard : public Component
{
public:
    Videocard();

    void setFrequency (float frequency);
    float getFrequency () {return m_frequency;}

    void setSlot (string slot) {m_slot = slot;}
    string getSlot () {return m_slot;}

    void showInfoVideocard();

private:
    string m_slot;
    float m_frequency;
};

#endif // VIDEOCARD_H
