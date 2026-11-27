#include "Orel.h"
#include <iostream>

Orel::Orel(const std::string& plemeno, int vek)
    : Zvire(2456, "cerna"),
    mPlemeno(plemeno),
    nVek(vek)
{
}

void Orel::vypisVlastnosti()
{
    Zvire::vypisVlastnosti();

    std::cout << "Plemeno: " << mPlemeno << std::endl;
    std::cout << "Vek: " << nVek << std::endl;
}

void Orel::vydejZvuk()
{
    std::cout << "Kraa" << std::endl;
}
