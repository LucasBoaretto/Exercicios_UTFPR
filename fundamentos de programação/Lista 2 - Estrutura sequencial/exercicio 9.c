/*Ler um número inteiro com até 3 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Na sequência calcular e mostrar o inverso do número*/

#include <stdio.h>

int main()
{

    int num, d1, d2, d3, inverso;

    printf("\nInforme um numero inteiro com ate tres digitos: ");
    scanf("%d", &num);

    d1 = num / 100;
    d2 = num % 100 / 10;
    d3 = num % 10;

    printf("\n%d eh o primeiro digito", d1);
    printf("\n%d eh o segundo digito", d2);
    printf("\n%d eh o terceiro digito", d3);

    inverso = d1;
    d1 = d3;
    d3 = inverso;
    printf("\nO inverso do numero eh: %d%d%d", d1, d2, d3);

    return 0;
}