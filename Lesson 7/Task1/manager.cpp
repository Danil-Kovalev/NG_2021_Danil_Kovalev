#include "manager.h"

Manager::Manager()
{

}

void Manager::addCPU(CPU cpu)
{
    cpus[cpusAmount] = cpu;
    cpusAmount++;
}

void Manager::addVideocard(Videocard videocard)
{
    videocards[videocardsAmount] = videocard;
    videocardsAmount++;
}

void Manager::addMotherboard(Motherboard motherboard)
{
    motherboards[motherboardsAmount] = motherboard;
    motherboardsAmount++;
}

void Manager::addRAM(RAM ram)
{
    rams[ramsAmount] = ram;
    ramsAmount++;
}

void Manager::getInfo()
{
    for (int i = 0; i <= 4; i++) {
        cpus[i].showInfoCPU();
        videocards[i].showInfoVideocard();
        motherboards[i].showInfoMotherboard();
        rams[i].showInfoRAM();
    }
}
