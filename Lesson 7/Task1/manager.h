#ifndef MANAGER_H
#define MANAGER_H
#include "cpu.h"
#include "motherboard.h"
#include "ram.h"
#include "videocard.h"


class Manager
{
public:
    Manager();

    void addCPU (CPU cpu);
    void addVideocard (Videocard videocard);
    void addMotherboard (Motherboard motherboard);
    void addRAM (RAM ram);

    void getInfo();

private:
    CPU cpus[4];
    int cpusAmount = 0;

    Videocard videocards [4];
    int videocardsAmount = 0;

    Motherboard motherboards[4];
    int motherboardsAmount = 0;

    RAM rams[4];
    int ramsAmount = 0;

};

#endif // MANAGER_H
