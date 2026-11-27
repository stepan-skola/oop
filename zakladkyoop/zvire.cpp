#include "zvire.h"
#include <iostream>

Zvire::Zvire(int hmotnost, const std::string& barva)
    : mHmotnost(hmotnost), mBarva(barva)
{
}

Zvire::Zvire()
    : mHmotnost(0), mBarva("neznamá")
{
}

Zvire::~Zvire()
{
}

void Zvire::vypisVlastnosti()
{
    std::cout << "Hmotnost: " << mHmotnost << " g" << std::endl;
    std::cout << "Barva: " << mBarva << std::endl;
}

void Zvire::vydejZvuk()
{
    std::cout << "Zvire vydava zvuk" << std::endl;
}
