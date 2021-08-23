#include "cpu.h"

CPU::CPU()
{
    m_hertz = 1;
    m_socket = "NOSOCKET";
    m_architecture = "NOARCHITECTURE";
}

void CPU::setHertz(float hertz)
{
    if (hertz <= 0) {
        cout << "Hertz can`t be lower or equal 0";
        return;
    }
    m_hertz = hertz;
}

void CPU::showInfoCPU()
{
    cout << "CPU: " << endl;
    cout << "\tName:" << getName() << endl;
    cout << "\tSocket: " << getSocket() << endl;
    cout << "\tHertz: " << getHertz() << endl;
    cout << "\tPrice: " << getPrice() << endl << endl;
}
