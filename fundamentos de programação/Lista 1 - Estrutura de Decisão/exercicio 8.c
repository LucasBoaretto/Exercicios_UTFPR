/*Ler três valores inteiros que representam os lados de um triângulo e determinar se esses valores podem
formar um triângulo (obs.: para ser um triângulo cada lado deve ser menor que a soma dos outros dois lados).
Se for um triângulo, determinar o seu tipo: equilátero (todos os lados iguais), isósceles (dois lados iguais) e
escaleno (todos os lados diferentes).
*/

#include <stdio.h>

int main()
{

    int a, b, c;

    printf("\nInforme os valores inteiros que representam os lados de um triangulo: ");
    printf("\nLado 1: ");
    scanf("%d", &a);
    printf("\nLado 2: ");
    scanf("%d", &b);
    printf("\nLado 3: ");
    scanf("%d", &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        printf("\nEh um triangulo");

        if (a == b && b == c)
        {
            printf("\nEh equilatero");
        }
        else if (a == b || a == c)
        {
            printf("\nEh isoceles");
        }
        else if (b == a || b == c)
        {
            printf("\nEh isoceles");
        }
        else if (c == a || c == b)
        {
            printf("\nEh isoceles");
        }
        else if (a != b && a != c)
        {
            printf("\nEh escaleno");
        }
        else if (b != a && b != c)
        {
            printf("\nEh escaleno");
        }
        else if (c != a && c != b)
        {
            printf("\nEh escaleno");
        }
    }
    else
    {
        printf("\nNao e um triangulo");
    }

    return 0;
}