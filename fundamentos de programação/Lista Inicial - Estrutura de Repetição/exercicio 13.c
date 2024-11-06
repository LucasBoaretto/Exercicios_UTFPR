/*Apresente os números pares entre 100 e 200. Contar quantos são ímpares e não divisíveis
por 3 nesse intervalo. Faça a média dos valores pares e divisíveis por 5 do intervalo.*/
#include <stdio.h>

int main()
{
    int i, cont = 0, soma = 0, media, contx = 0;

    for (i = 100; i <= 200; i++)
    {
        if (i % 2 != 0 && i % 3 != 0)
        {
            cont++;
        }
        else if (i % 2 == 0 && i % 5 == 0)
        {
            contx++;
            soma = soma + i;
            media = soma / contx;
        }
    }
    printf("Contagem de numeros nao divisiveis por 2 ou 3\n", cont);
    printf("Contagem de numeros impares e indivisiveis por 3: %d\n", contx);
    printf("Media de valores pares e multiplos de 5\n", media);

    return 0;
}
