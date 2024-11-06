/* Ler um número double. Separar a parte inteira e a parte decimal desse número. Apresentar a parte decimal
como um valor double e como um inteiro de três dígitos. Da parte inteira separar o número que representa
unidade, dezena e centena e mostrar.*/

#include <stdio.h>

int main()
{
    double num, parteDec;
    int parteInt, parteDecInt, uni, dez, cent;

    printf("\nInforme um valor double: ");
    scanf("%lf", &num);

    parteInt = (int)num;
    parteDec = num - parteInt;
    parteDecInt = parteDec * 1000;
    cent = parteInt / 100;
    dez = parteInt % 100 / 10;
    uni = parteInt % 10;
    // uni = parteInt % 100 / 10;, tambem funciona se for assim!

    printf("\nParte inteira do numero: %d", parteInt);
    printf("\nParte decimal do numero: %lf", parteDec);
    printf("\nParte decimal como inteiro de tres digitos: %d", parteDecInt);
    printf("\nCentena: %d", cent);
    printf("\nDezena: %d", dez);
    printf("\nUnidade: %d", uni);

    return 0;
}