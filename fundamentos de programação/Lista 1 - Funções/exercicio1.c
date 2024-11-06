/*Fazer uma função para verificar se um número é ou não primo. A função será implementada em um
arquivo de cabeçalho "primo.h" e deverá retornar 0 se o número for primo ou 1, caso o número não seja
primo. Elaborar um programa para usar essa função para:
a) Verificar se um número informado pelo usuário é ou não um número primo. Validar a entrada para que o
usuário informe um número positivo.
b) Mostrar os primos no intervalo entre 1 e 100.
c) Fazer a média dos primos entre 200 e 100.
*/

#include <stdio.h>
#include <ctype.h>
#include "primos.h"

int main()
{

    char opcao, reset;
    int num, i, contPrimo, soma;
    float media;

    do
    {

        printf("A - Verificar se um numero eh primo\n");
        printf("B - Primos entre 1 e 100\n");
        printf("C - Media dos primos entre 200 e 100\n");

        do
        {
            printf("Opcao: ");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = toupper(opcao);

            if (opcao != 'A' && opcao != 'B' && opcao != 'C')
            {
                printf("Opcao invalida!\n");
            }

        } while (opcao != 'A' && opcao != 'B' && opcao != 'C');

        contPrimo = 0;
        soma = 0;
        switch (opcao)
        {
        case 'a':
        case 'A':
            do
            {
                printf("\nInforme um numero: ");
                scanf("%d", &num);

                if (num < 0)
                {
                    printf("Valor invalido!\n");
                }

            } while (num < 0);

            if (primo(num) == 0)
            {
                printf("%d eh primo\n", num);
            }
            else
            {
                printf("%d nao eh primo\n", num);
            }
            break;
        case 'B':
        case 'b':
            for (i = 1; i <= 100; i++)
            {
                if (primo(i) == 0)
                {
                    printf("%d\t", i);
                }
            }
            printf("\n");
            break;

        case 'C':
        case 'c':
            for (i = 200; i >= 100; i--)
            {
                if (primo(i) == 0)
                {
                    contPrimo++;
                    soma = soma + i;
                }
            }
            media = (float)soma / contPrimo;
            printf("\nMedia dos primos entre 200 e 100: %.2f\n", media);
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