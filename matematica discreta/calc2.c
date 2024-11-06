#include <stdio.h>

int main()
{

    int a, mod, x;

    printf("Insira um numero: ");
    scanf("%d", &a);
    printf("\nInsira o mod: ");
    scanf("%d", &x);

    mod = a % x;

    printf("resto = %d", mod);

    return 0;
}