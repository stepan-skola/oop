#pragma once

#include "zvire.h"
#include <string>

class Macka : public Zvire
{
public:
    Macka(const std::string& plemeno, int vek);

    void vypisVlastnosti();
    void vydejZvuk() override;

private:
    std::string mPlemeno;
    int nVek;
};