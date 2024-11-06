/*Ler um número maior que 2 e imprimir todos os pares entre 2 e o número lido. Imprimir a soma dos pares,
o produto dos ímpares que são divisíveis por 9 e a média de todos os números do intervalo.
*/

#include <stdio.h>

int main()
{

    int num, i, soma = 0, produto = 1, cont = 0, somaTot = 0;
    float media;

    do
    {
        printf("Informe um numero maior que 2: ");
        scanf("%d", &num);

        if (num < 2)
        {
            printf("\nValor invalido!");
        }

    } while (num < 2);

    for (i = 2; i <= num; i++)
    {
        somaTot = somaTot + i;
        cont++;
        if (i % 2 == 0)
        {
            soma = soma + i;
            printf("%d\t", i);
        }
        if (i % 2 != 0 && i % 9 == 0)
        {
            produto = produto * i;
        }
    }

    media = (float)somaTot / cont;

    printf("\nSoma dos pares: %d\n", soma);
    printf("Produto dos impares divisiveis por 9: %d\n", produto);
    printf("Media de todos os numeors: %.2f", media);

    return 0;
}