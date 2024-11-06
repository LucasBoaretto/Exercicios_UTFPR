/*Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e mostrar:
a) A soma desses valores;
b) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
f) O resto da divisão do primeiro pelo segundo.*/

#include <stdio.h>

int main()
{

    int a, b, soma, sub, mult, div, resto;
    float divF;

    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);

    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    divF = (float)a / b;
    resto = a % b;

    printf("%d + %d = %d\n", a, b, soma);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mult);
    printf("%d / %d = %d\n", a, b, div);
    printf("%d / %d = %.2f\n", a, b, divF);
    printf("%d %% %d = %d\n", a, b, resto);

    return 0;
}