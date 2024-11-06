/*Crie um programa que leia uma data no formato ddmmaaaa e imprima se a data é válida ou não.*/

#include <stdio.h>

int main()
{

    int data, d1, d2, m1, m2, a1, a2, a3, a4;

    printf("\nInforme uma data no formato ddmmaaaa: ");
    scanf("%d", &data);

    d1 = data / 10000000;
    d2 = data % 10000000 / 1000000;
    m1 = data % 1000000 / 100000;
    m2 = data % 100000 / 10000;
    a1 = data % 10000 / 1000;
    a2 = data % 1000 / 100;
    a3 = data % 100 / 10;
    a4 = data % 10;

    if ((d1 >= 1 && d1 <= 3) && (d2 >= 1 && d2 <= 31) && (m1 >= 0 && m1 <= 1) && (m2 >= 1 && m2 <= 9) && (a1 >= 1 && a1 <= 2) && (a2 >= 0 && a2 <= 9) && (a3 >= 0 && a3 <= 9) && (a4 >= 0 && a4 <= 9))
    {
        printf("\ndata valida dia %d%d/%d%d/%d%d%d%d", d1, d2, m1, m2, a1, a2, a3, a4);
    }
    else
    {
        printf("\ndata invalida");
    }
    /*if ((m1 >= 0 && m1 <= 1) && (m2 >= 1 && m2 <= 9))
    {
        printf("\ndata valida mes %d%d", m1, m2);
    }
    else
    {
        printf("\ndata invalida");
    }
    if ((a1 >= 1 && a1 <= 2) && (a2 >= 0 && a2 <= 9) && (a3 >= 0 && a3 <= 9) && (a4 >= 0 && a4 <= 9))
    {
        printf("\ndata valida ano %d%d%d%d", a1, a2, a3, a4);
    }
    else
    {
        printf("\ndata invalida");
    }*/
    return 0;
}
