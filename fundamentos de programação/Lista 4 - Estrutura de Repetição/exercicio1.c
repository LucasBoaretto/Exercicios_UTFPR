/*O número 3.025 possui a seguinte característica: 30 + 25 = 55 e 552 = 3 025. Faça um programa que escreva
todos os números com quatro algarismos que possuem a citada característica.*/

#include <stdio.h>

int main()
{

    int i, v1, v2;

    for (i = 1000; i < 10000; i++)
    {
        v1 = i / 100;
        v2 = i % 100;
        if ((v1 + v2) * (v1 + v2) == i)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}