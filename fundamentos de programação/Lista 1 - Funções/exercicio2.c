/*Fazer duas funções: uma para calcular o fatorial de um número e a outra para mostrar o fatorial de um
número. Ambas as funções devem ser implementadas em um arquivo de cabeçalho chamado "fatorial.h".
Elaborar um programa que use essas funções para:
a) Calcular e mostrar o fatorial dos números entre 1 e 8.
b) Calcular e mostrar o fatorial de um valor informado pelo usuário. Continuar a leitura enquanto forem
informados valores positivos.*/

#include <stdio.h>
#include <ctype.h>
#include "fatorial.h"

int main()
{

    char reset, opcao;
    int num, i;

    do
    {
        printf("A - Fatorial entre 1 e 8\n");
        printf("B - Fatorial de um numero\n");

        do
        {
            printf("Opcao: ");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = toupper(opcao);

            if (opcao != 'A' && opcao != 'B')
            {
                printf("Opcao invalida!\n");
            }
        } while (opcao != 'A' && opcao != 'B');

        switch (opcao)
        {
        case 'A':
        case 'a':
            for (i = 1; i <= 8; i++)
            {
                mostraFatorial(i, calculaFatorial(i));
            }
            break;
        case 'B':
        case 'b':
            do
            {
                printf("\nInforme um numero: ");
                scanf("%d", &num);
                if (num > 0)
                {
                    mostraFatorial(num, calculaFatorial(num));
                }

            } while (num > 0);
            break;
        }
        do
        {
            printf("\nExecutar novamente (S ou N)?:");
            fflush(stdin);
            scanf("%c", &reset);
            reset = toupper(reset);

            if (reset != 'S' && reset != 'N')
            {
                printf("Opcao invalida!\n");
            }
        } while (reset != 'S' && reset != 'N');
    } while (reset == 'S');

    return 0;
}