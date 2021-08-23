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

void Manager::findComponents()
{
    int price = 0;
    cout << "Enter price: ";
    cin >> price;
    for (int i = 0; i < 3; i++) {
        if (cpus[i].getPrice() + videocards[i].getPrice() + motherboards[i].getPrice() + rams[i].getPrice() <= price) {
            cout << "-------------------------------------------------------------------" << endl;
            cpus[i].showInfoCPU();
            videocards[i].showInfoVideocard();
            motherboards[i].showInfoMotherboard();
            rams[i].showInfoRAM();
        }
        else if (price <= 0){
            cout << "Oops, we do not have a computer below or the same price..." << endl;
        }
    }
}

void Manager::managerManagment()
{
    while (true) {
        char inputUser;
        cout << "To display all components, press a" << endl << "To find a computer by price, press s" << endl << "Press f ro exit:" << endl << "Enter: ";
        cin >> inputUser;
        cout << endl;
        if (inputUser == 'a')
            getInfo();
        if (inputUser == 's')
            findComponents();
        if (inputUser == 'f')
            break;
    }
}

void Manager::getInfo()
{
    for (int i = 0; i < 3; i++) {
        cout << "-------------------------------------------------------------------" << endl;
        cpus[i].showInfoCPU();
        videocards[i].showInfoVideocard();
        motherboards[i].showInfoMotherboard();
        rams[i].showInfoRAM();
    }
}
