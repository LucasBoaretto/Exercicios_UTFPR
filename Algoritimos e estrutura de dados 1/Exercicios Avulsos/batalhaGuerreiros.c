#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "batalhaGuerreiros.h"

int main()
{
    srand(time(NULL));

    Guerreiro Gutz = {0, 0, 0, 0, 1};
    Guerreiro Griffith = {0, 0, 0, 0, 2};

    criaGuerreiro(&Gutz);
    criaGuerreiro(&Griffith);

    while (1)
    {
        ataca(&Gutz, &Griffith);
        ataca(&Griffith, &Gutz);
    }

    return 0;
}