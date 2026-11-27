#pragma once

#include <string>
#include <iostream>

class Zvire
{
public:
    Zvire(int hmotnost, const std::string& barva);
    Zvire();
    ~Zvire();

    void vypisVlastnosti();
    virtual void vydejZvuk();

public:
    int mHmotnost;
    std::string mBarva;
};