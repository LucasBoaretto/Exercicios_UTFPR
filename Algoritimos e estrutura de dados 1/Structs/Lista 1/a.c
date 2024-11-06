#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite o elemento na linha e coluna [%d],[%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("a matriz e:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}