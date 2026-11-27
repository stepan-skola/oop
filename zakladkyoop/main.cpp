#include <iostream>
#include "Macka.h"
#include "zvire.h"
#include "Orel.h"
#include "Pes.h"

int main()
{
    Zvire zvire(1000, "cerna");
    zvire.vypisVlastnosti();
    zvire.vydejZvuk();

    std::cout << std::endl;

    Orel orel("Divoky", 3);
    orel.vypisVlastnosti();
    orel.vydejZvuk();

    std::cout << std::endl;

    Pes pes("Nemecky ovcar", 5);
    pes.vypisVlastnosti();
    pes.vydejZvuk();

    std::cout << std::endl;

    Macka macka("Siamka", 2);
    macka.vypisVlastnosti();
    macka.vydejZvuk();

    return 0;
}