#include <iostream>
#include "manager.h"

using namespace std;

int main()
{
    CPU intel;
    intel.setName("i5-7400");
    intel.setHertz(3);
    intel.setCompany("Intel");
    intel.setArchitecture("Kaby Lake");
    intel.setPrice(230);
    intel.setSocket("LGA");

    CPU amd;
    amd.setName("Ryzen 3");
    amd.setHertz(3.2);
    amd.setCompany("AMD");
    amd.setArchitecture("RISC");
    amd.setPrice(91);
    amd.setSocket("AM4");

    CPU intelSecond;
    intelSecond.setName("i9-11900K");
    intelSecond.setHertz(3.5);
    intelSecond.setCompany("Intel");
    intelSecond.setArchitecture("Rocket Lake-S");
    intelSecond.setPrice(692);
    intelSecond.setSocket("LGA1200");

    Videocard geforce;
    geforce.setName("GTX 1050 Ti");
    geforce.setCompany("Asus");
    geforce.setFrequency(7008);
    geforce.setSlot("PCI");
    geforce.setPrice(292);

    Videocard radeon;
    radeon.setName("PowerColor Radeon RX 6600 XT Hellhound");
    radeon.setCompany("Radeon");
    radeon.setFrequency(16000);
    radeon.setSlot("PCI");
    radeon.setPrice(826);

    Videocard asus;
    asus.setName("ROG GeForce RTX 3080 Ti STRIX");
    asus.setCompany("Asus");
    asus.setFrequency(19000);
    asus.setSlot("PCI");
    asus.setPrice(2692);

    Motherboard gigabyte;
    gigabyte.setCompany("Gigabyte");
    gigabyte.setName("H410M S2H V2");
    gigabyte.setSlotRam("DDR");
    gigabyte.setSlotVideocard("PCI");
    gigabyte.setSocket("LGA 1151-v2");
    gigabyte.setPrice(69);

    Motherboard gigabyteSecond;
    gigabyteSecond.setCompany("Gigabyte");
    gigabyteSecond.setName("GA-A320M-H");
    gigabyteSecond.setSlotRam("DDR4");
    gigabyteSecond.setSlotVideocard("PCI");
    gigabyteSecond.setSocket("AM4");
    gigabyteSecond.setPrice(46);

    Motherboard msi;
    msi.setCompany("Intel");
    msi.setName("MSI MEG Z590 ACE");
    msi.setSlotRam("DDR4");
    msi.setSlotVideocard("PCI");
    msi.setSocket("LGA1200");
    msi.setPrice(503);

    RAM kingston;
    kingston.setName("FURY Beast Black");
    kingston.setCompany("Kingston");
    kingston.setSlot("DDR");
    kingston.setFrequency(3200);
    kingston.setPrice(107);

    RAM team;
    team.setName("Team DDR4 8GB 2666Mhz Elite");
    team.setCompany("Team Group");
    team.setSlot("DDR4");
    team.setFrequency(2.7);
    team.setPrice(38);

    RAM hyperX;
    hyperX.setName("HyperX Fury RGB");
    hyperX.setCompany("HyperX");
    hyperX.setSlot("DDR4");
    hyperX.setFrequency(3.6);
    hyperX.setPrice(923);

    Manager manager;
    manager.addCPU(intel);
    manager.addCPU(amd);
    manager.addCPU(intelSecond);
    manager.addVideocard(geforce);
    manager.addVideocard(radeon);
    manager.addVideocard(asus);
    manager.addMotherboard(gigabyte);
    manager.addMotherboard(gigabyteSecond);
    manager.addMotherboard(msi);
    manager.addRAM(kingston);
    manager.addRAM(team);
    manager.addRAM(hyperX);

    manager.managerManagment();
}
