/*Ler dois números que representam os limites de um intervalo. Validar a entrada, o usuário deverá fornecer
valores positivos. Mostrar o intervalo em ordem crescente.
a) Mostrar os números primos desse intervalo, com cinco números por linha.
b) Calcular a média dos múltiplos de 3 e de 7 desse intervalo. Validar para que não seja realizada uma divisão
por zero*/

#include <stdio.h>

int main()
{

    int intervaloS, intervaloI, i, j, divisores, cont = 0, soma = 0, contLinha = 0, troca;
    float media;

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

    for (i = 2; i <= intervaloS; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            cont++;
            soma += i;
        }
        divisores = 0;
        for (j = intervaloI; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisores++;
            }
        }
        if (divisores == 2)
        {
            printf("%2d  ", i);
            contLinha++;
            if (contLinha % 5 == 0)
            {
                printf("\n");
            }
        }
    }

    media = (float)soma / cont;
    printf("\nMedia dos multiplos de 3 e 7: %.2f", media);

    return 0;
}