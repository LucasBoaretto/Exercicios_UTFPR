#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int vetA[10], vetB[10], i;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        vetA[i] = rand() % (10 + 1); // 0 e 10
    }

    printf("\n--------------------Vetor A --------------------\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\t", vetA[i]);
    }

    printf("\n\n--------------------Vetor B --------------------\n");
    for (i = 0; i < 10; i++)
    {
        vetB[i] = vetA[i] * 2;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", vetB[i]);
    }

    return 0;
}