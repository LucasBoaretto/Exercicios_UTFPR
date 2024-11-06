/*Faça um programa que apresente uma tabela de lucro esperado, em decorrência do número de pessoas
e valor do ingresso. O valor do ingresso vai de R$ 15,00 até R$ 20,00 aumentando de R$ 0,50 centavos. É
informada a quantidade de pessoas.*/

#include <stdio.h>

int main()
{

    int qtde, j, contIng = 0;
    float i, mult;

    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &qtde);

    i = 15;

    printf("VALOR DO INGRESSO\tVALOR TOTAL RECEBIDO\n");
    do
    {

        for (j = 0; j <= qtde; j++)

        {
            if (i >= 15 && i <= 20)
            {
                mult = i * qtde;
                contIng++;
                printf("R$ %.2f\t        R$ %.2f\n", i, mult);
            }
            i = i + 0.5;
        }

    } while (contIng < qtde);

    return 0;
}