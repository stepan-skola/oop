#pragma once

#include "zvire.h"
#include <string>

class Orel : public Zvire
{
public:
    Orel(const std::string& plemeno, int vek);

    void vypisVlastnosti();
    void vydejZvuk() override;

private:
    std::string mPlemeno;
    int nVek;
};