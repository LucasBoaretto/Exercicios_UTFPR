/*Faça um programa que mostre o resultado da seguinte soma, sendo n o valor informado pelo usuário:
Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n
*/

#include <stdio.h>

int main()
{

    int i, j, num, cont = 0;
    float soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &num);

    i = 1;

    do
    {
        for (j = 1; j <= num; j++)
        {
            soma = soma + ((float)i / j);
            if (i == 1)
            {
                printf("%d/%d", i, j);
            }
            if (j < num)
            {
                printf(" + ");
            }

            cont++;
        }

    } while (cont < num);
    printf(" = %.2f", soma);

    return 0;
}