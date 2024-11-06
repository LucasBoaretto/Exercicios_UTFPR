/* Um número abundante é aquele cuja soma dos seus divisores (excluído o próprio número) é maior do que ele
mesmo. Por exemplo, o número 12 é abundante, pois se somarmos os seus divisores (1, 2, 3, 4 e 6) obteremos o valor
16 e este é maior do que o próprio número. Já o número 10 não é abundante, pois a somatória dos seus divisores (1, 2
e 5) é menor do que 10. Também o número 6 não é abundante, pois a soma de seus divisores (1, 2 e 3) é igual a 6.
Escreva um programa que permita a leitura de um valor a partir do teclado e imprima uma mensagem informando se o
número digitado é ou não abundante.
*/

#include <stdio.h>

int main()
{
    int num, i, cont = 0, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\nDivisores:\n");

    do
    {
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0 && num != i)
            {
                printf("%d\n", i);
                soma = soma + i;
            }
            cont++;
        }

    } while (cont < num);

    printf("----\n%d\n", soma);

    if (soma > num)
    {
        printf("\n%d eh abundante porque a soma dos divisores eh maior que %d", num, num);
    }
    else
    {
        printf("\n%d nao eh abundante porque a soma dos divisores eh menor que %d", num, num);
    }

    return 0;
}