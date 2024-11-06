#include <stdio.h>

int main()
{

    int a, b, soma, mod, x;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);

    soma = a + b;
    mod = soma % x;

    printf("resto = %d", mod);

    return 0;
}