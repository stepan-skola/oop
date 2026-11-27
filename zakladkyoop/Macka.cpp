#include <iostream>
#include "Macka.h"

Macka::Macka(const std::string& plemeno, int vek)
    : Zvire(2456, "cerna"),
    mPlemeno(plemeno),
    nVek(vek)
{
}

void Macka::vypisVlastnosti()
{
    Zvire::vypisVlastnosti();

    std::cout << "Plemeno: " << mPlemeno << std::endl;
    std::cout << "Vek: " << nVek << std::endl;
}

void Macka::vydejZvuk()
{
    std::cout << "Mnau" << std::endl;
}
