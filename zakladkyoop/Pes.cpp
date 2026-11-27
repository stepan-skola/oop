#include "Pes.h"
#include <iostream>

Pes::Pes(const std::string& plemeno, int vek)
    : Zvire(2456, "cerna"),
    mPlemeno(plemeno),
    nVek(vek)
{
}

void Pes::vypisVlastnosti()
{
    Zvire::vypisVlastnosti();

    std::cout << "Plemeno: " << mPlemeno << std::endl;
    std::cout << "Vek: " << nVek << std::endl;
}

void Pes::vydejZvuk()
{
    std::cout << "Haf haf" << std::endl;
}
