/*Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer com que a saída do
programa seja mostrada como no exemplo a seguir:
*/

#include <stdio.h>

int main()
{

    int i, j;
    long long int fatorial;

    for (i = 1; i <= 12; i++)
    {
        printf("%d! => ", i);
        fatorial = 1;
        for (j = i; j >= 2; j--)
        {

            fatorial = fatorial * j;
            if (i == 1)
            {
                printf("%d ", j);
            }
            else
            {
                printf("%d * ", j);
            }
        }
        printf("1 = %lld\n", fatorial);
    }

    return 0;
}