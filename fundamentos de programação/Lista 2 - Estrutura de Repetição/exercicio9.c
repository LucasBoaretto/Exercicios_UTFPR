/*Faça o programa que apresente a seguinte saída como no exemplo, solicitando ao usuário o número
máximo (deve ser positivo).*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    int i, j, num;
    char opcao;

    do
    {
        do
        {
            printf("\nInforme um numero positivo: ");
            scanf("%d", &num);
            if (num < 0)
            {
                printf("Opcao invalida!\n");
            }

        } while (num < 0);

        for (i = 1; i <= num; i++)
        {
            for (j = 1; j <= num; j++)
            {
                printf("%2d ", i);
            }
            printf("\n");
        }

        do
        {
            printf("\nDeseja digitar outro numero (S ou N): ");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = toupper(opcao);
        } while (opcao != 'S' && opcao != 'N');

    } while (opcao == 'S');

    return 0;
}