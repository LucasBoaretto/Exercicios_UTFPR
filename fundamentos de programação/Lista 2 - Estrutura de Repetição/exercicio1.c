/* Escreva um algoritmo que gere a série de Fibonacci até o termo n que é informado pelo usuário. A série de
Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... , etc.*/

#include <stdio.h>

int main()
{
    int num, term1 = 1, term2 = 1, proximoTermo;

    printf("Quantos termos mostrar? ");
    scanf("%d", &num);

    for (int i = 0; i <= num; ++i)
    {
        printf("%d\t", term1);
        proximoTermo = term1 + term2;
        term1 = term2;
        term2 = proximoTermo;
    }

    return 0;
}
