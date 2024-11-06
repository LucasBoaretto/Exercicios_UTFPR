/* Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo usuário. Cada
data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o segundo, o mês e o terceiro, o
ano.
*/

#include <stdio.h>

int main()
{

    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("\nInforme a primeira data \n");
    printf("Escreva dia (dd): ");
    scanf("%d", &dia1);
    printf("Escreva mes (mm): ");
    scanf("%d", &mes1);
    printf("Escreva ano (aaaa): ");
    scanf("%d", &ano1);

    printf("\nInforme a segunda data \n");
    printf("Escreva dia (dd): ");
    scanf("%d", &dia2);
    printf("Escreva mes (mm): ");
    scanf("%d", &mes2);
    printf("Escreva ano (aaaa): ");
    scanf("%d", &ano2);

    if (dia1 >= 1 && dia1 <= 31 && dia2 >= 1 && dia2 <= 31 && mes1 >= 1 && mes1 <= 12 && mes2 >= 1 && mes2 <= 12)
    {
        if (dia1 > dia2 && mes1 > mes2 && ano1 > ano2)
        {
            printf("\nA maior data eh: %d/%d/%d", dia1, mes1, ano1);
        }
        else
        {
            printf("\nA maior data eh: %d/%d/%d", dia2, mes2, ano2);
        }
    }
    else
    {
        printf("Formato de data invalida");
    }
    return 0;
}