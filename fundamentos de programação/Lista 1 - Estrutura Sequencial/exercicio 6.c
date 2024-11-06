/*Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca.*/

#include <stdio.h>

int main()
{

    int a, b, troca;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf("\nAntes da troca:A=%d e B=%d", a, b);

    troca = a;
    a = b;
    b = troca;

    printf("\nDepois da troca:A=%d e B=%d", a, b);

    return 0;
}