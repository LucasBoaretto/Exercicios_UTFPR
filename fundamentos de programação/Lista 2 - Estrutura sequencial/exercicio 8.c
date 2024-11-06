/* Ler um número inteiro com até 5 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Também calcular e mostrar a soma dos dígitos.
*/

#include <stdio.h>

int main()
{
    //a variavel d representa digito
    int num, d1, d2, d3, d4, d5, soma;

    printf("\nInforme um numero inteiro com ate cinco digitos: ");
    scanf("%d", &num);

    d1 = num / 10000;
    d2 = num % 10000 / 1000;
    d3 = num % 1000 / 100;
    d4 = num % 100 / 10;
    d5 = num % 10;
    soma = d1 + d2 + d3 + d4 + d5;

    printf("\n%d eh o primeiro digito", d1);
    printf("\n%d eh o segundo digito", d2);
    printf("\n%d eh o terceiro digito", d3);
    printf("\n%d eh o quarto digito", d4);
    printf("\n%d eh o quinto digito\n", d5);
    printf("\nA soma dos digitos eh: %d", soma);

    return 0;
}