/*Faça um programa que solicite valores positivos para o limite inferior e superior de um intervalo e mostre os
números primos do intervalo em ordem crescente e faça a soma dos dígitos de cada número primo.*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    int intervaloS, intervaloI, soma, troca, i, j, k, divisores;
    char opcao;

    do
    {
        do
        {
            printf("Informe um valor para o limite inferior do intervalo: ");
            scanf("%d", &intervaloI);
            if (intervaloI < 0)
            {
                printf("Valor invalido!\n");
            }
        } while (intervaloI < 0);

        do
        {
            printf("Informe um valor para o limite superior do intervalo: ");
            scanf("%d", &intervaloS);
            if (intervaloS < 0)
            {
                printf("Valor invalido!\n");
            }
        } while (intervaloS < 0);

        if (intervaloI > intervaloS)
        {
            troca = intervaloI;
            intervaloI = intervaloS;
            intervaloS = troca;
        }

        for (i = intervaloI; i <= intervaloS; i++)
        {
            divisores = 0;
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    divisores++;
                }
            }
            if (divisores == 2)
            {
                soma = 0;
                k = i;
                while (k > 0)
                {
                    soma = soma + k % 10;
                    k = k / 10;
                }
                printf("Primo %d => Soma dos digitos = %d\n", i, soma);
            }
        }

        do
        {
            printf("\nDeseja digitar outro numero (S/N): ");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = toupper(opcao);

            if (opcao != 'S' && opcao != 'N')
            {
                printf("Opcao invalida!\n");
            }
        } while (opcao != 'S' && opcao != 'N');
    } while (opcao == 'S');

    return 0;
}