/*Ler uma série de números indicados pelo usuário até ser informado o valor zero. Encontrar e mostrar o
maior e o menor dos valores informados pelo usuário. O valor zero indica o final da leitura e não deve ser
considerado.*/

#include <stdio.h>

int main()
{

    int num, maior, menor, trava = 0;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if (trava == 0)
        {
            maior = num;
            menor = num;
            trava = 1;
        }

        if (num > maior)
        {
            maior = num;
        }
        else if (num < menor && num != 0)
        {
            menor = num;
        }

    } while (num != 0);

    printf("\nMaior: %d\tMenor: %d", maior, menor);

    return 0;
}