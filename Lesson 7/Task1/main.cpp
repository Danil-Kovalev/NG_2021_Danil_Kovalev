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

    Videocard geforce;
    geforce.setName("GTX 1050 Ti");
    geforce.setCompany("Asus");
    geforce.setFrequency(1752);
    geforce.setSlot("PCI");
    geforce.setPrice(292);

    Motherboard gigabyte;
    gigabyte.setCompany("Gigabyte");
    gigabyte.setName("H410M S2H V2");
    gigabyte.setSlotRam("DDR");
    gigabyte.setSlotVideocard("PCI");
    gigabyte.setSocket("LGA 1151-v2");
    gigabyte.setPrice(69);

    RAM kingston;
    kingston.setName("FURY Beast Black");
    kingston.setCompany("Kingston");
    kingston.setSlot("DDR");
    kingston.setFrequency(3200);
    kingston.setPrice(107);
}
