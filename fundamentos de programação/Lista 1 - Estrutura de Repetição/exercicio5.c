/*Ler um número que indica a quantidade de ímpares iniciando em 1 que deve ser mostrada. O valor
informado para a quantidade deve ser maior que 0. Validar a entrada.*/

#include <stdio.h>

int main()
{

    int num, i, contImpar = 0;

    do
    {

        printf("Quantos impares quer mostrar? ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Valor invalido!\n");
        }

    } while (num < 1);

    i = 1;

    do
    {

        if (i % 2 != 0)
        {
            printf("%d\n", i);
            contImpar++;
        }

        i++;

    } while (contImpar < num);

    return 0;
}