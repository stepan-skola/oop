#pragma once

#include "zvire.h"

class Pes : public Zvire
{
public:
    Pes(const std::string& plemeno, int vek);

    void vypisVlastnosti();
    void vydejZvuk() override;

private:
    std::string mPlemeno;
    int nVek;
};