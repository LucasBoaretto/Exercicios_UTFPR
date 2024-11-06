/*Apresente (separados por tabulação) os números entre 1 e 1000 que são divisíveis por 11 e
ímpares.*/
#include <stdio.h>

int main()
{

    int i;

    for (i = 1; i <= 1000; i++)
    {
        if (i % 11 == 0 && i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}
