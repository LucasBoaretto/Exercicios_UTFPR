/*Ler números inteiros informados pelo usuário até ser informado um valor negativo. Dentre os números
informados, exceto o valor negativo que é a condição de saída:
a) Contar a quantidade de números menores que 10 ou maiores que 100.
b) Contar a quantidade de números ímpares.
c) Contar a quantidade de números divisíveis por 10.
d) Contar a quantidade de números entre 10 e 100.
e) Contar quantas vezes é informado o número 30.
f) Contar quantas vezes é informado um número diferente de 10, de 20 e de 30.*/

#include <stdio.h>

int main()
{

    int num, contA = 0, contB = 0, contC = 0, contD = 0, contE = 0, contF = 0;

    do
    {
        printf("Informe um numero (negativo para finalizar): ");
        scanf("%d", &num);

        if (num < 10 || num > 100)
        {
            contA++;
        }
        if (num % 2 != 0)
        {
            contB++;
        }
        if (num % 10 == 0)
        {
            contC++;
        }
        if (num >= 10 && num <= 100)
        {
            contD++;
        }
        if (num == 30)
        {
            contE++;
        }
        if (num != 10 && num != 20 && num != 30)
        {
            contF++;
        }

    } while (num >= 0);

    printf("\nA quantidade de numeros menores que 10 ou maiores que 100 eh: %d\n", contA);
    printf("A quantidade de numeros impares eh: %d\n", contB);
    printf("A quantidade de numeros divisiveis por 10 eh: %d\n", contC);
    printf("A quantidade de numeros entre 10 e 100 eh: %d\n", contD);
    printf("O numero de vezes que foi informado o numero 30 eh: %d\n", contE);
    printf("A quantidade de vezes que foi informado um numero diferente de 10, de 20 e 30 eh: %d", contF);

    return 0;
}