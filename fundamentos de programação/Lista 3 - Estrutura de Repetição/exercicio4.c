/*Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento mensal obtido por esta
aplicação e o período do investimento; e retorne o valor da aplicação ao final do período de investimento. Obs.:
A cada 12 meses o percentual de rendimento deve ser aumentado em 0,25%. Validar o valor da aplicação para
que seja positivo. Validar o percentual de rendimento para que seja um número entre 0 e 1. Validar o período
para que seja um valor positivo.*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    float valApli, percRend, valF;
    int periodo, i;
    char opcao;

    do
    {
        do
        {
            printf("Informe o valor da aplicacao: ");
            scanf("%f", &valApli);

            if (valApli < 0)
            {
                printf("Valor invalido!\n");
            }

        } while (valApli < 0);

        do
        {
            printf("Informe o percentual de rendimento mensal (0 a 1): ");
            scanf("%f", &percRend);

            if (percRend < 0 && percRend > 1)
            {
                printf("Valor invalido!\n");
            }

        } while (percRend < 0 && percRend > 1);

        do
        {
            printf("Informe o periodo (em meses): ");
            scanf("%d", &periodo);

            if (periodo <= 0)
            {
                printf("Valor invalido!\n");
            }

        } while (periodo <= 0);

        printf("MES\t   %% DE RENDIMENTO\t  VALOR APLICADO\n");
        for (i = 1; i <= periodo; i++)
        {
            if (i % 12 == 0)
            {
                percRend = percRend + 0.25;
            }

            valF = valApli + (valApli * percRend);
            printf("%d\t\t%.2f\t\t%.2f\n", i, percRend, valF);
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