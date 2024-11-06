/*Elaborar um programa que determine a potência de um número. O usuário informa a base e o expoente e o
programa informa o resultado da base elevada ao expoente. Não usar funções prontas do C para fazer o cálculo da
potência.*/

#include <stdio.h>

int main()
{
    int base, expoente, i, resultado = 1;

    printf("Informe o valor da base: ");
    scanf("%d", &base);
    printf("Informe o valor do expoente: ");
    scanf("%d", &expoente);

    printf("%d", base);
    for (i = 1; i < expoente; ++i)
    {
        resultado = resultado * base;
        printf(" * %d", base);
    }
    resultado = resultado * base;
    printf(" = %d\n", resultado);

    return 0;
}
