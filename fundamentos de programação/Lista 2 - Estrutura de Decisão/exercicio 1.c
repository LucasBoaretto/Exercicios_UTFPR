/*Um ano é bissexto se for divisível por 4 e não for divisível por 100. Também são bissextos os divisíveis por 400.
Escreva um programa que determina se um ano informado pelo usuário é bissexto.*/
#include <stdio.h>

int main()
{

    int ano;
    printf("\nInforme um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    {
        printf("\nO ano %d eh bissexto", ano);
    }
    else
    {
        printf("\nO ano %d nao eh bissexto", ano);
    }

    return 0;
}
