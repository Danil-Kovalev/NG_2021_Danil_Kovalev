#ifndef CPU_H
#define CPU_H
#include "component.h"


class CPU : public Component
{
public:
    CPU();

    void setHertz (float hertz);
    float getHertz () {return m_hertz;}

    void setSocket (string socket) {m_socket = socket;}
    string getSocket () {return m_socket;}

    void setArchitecture (string architecture) {m_architecture = architecture;}
    string getArchitecture () {return m_architecture;}

    void showInfoCPU();

private:
    float m_hertz;
    string m_socket;
    string m_architecture;
};

#endif // CPU_H
