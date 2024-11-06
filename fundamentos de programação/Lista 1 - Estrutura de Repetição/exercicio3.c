/*Ler dois números que representam os limites de um intervalo e ler o incremento. Mostrar os números desse
intervalo de acordo com o incremento indicado e em ordem crescente. O usuário pode informar os valores
que representam os limites do intervalo em ordem crescente ou decrescente. Fazer a média dos ímpares e
divisíveis por 35 do intervalo.*/

#include <stdio.h>

int main()
{

    int intervaloI, intervaloF, incremento, soma = 0, contI = 0, i, troca;
    float media;

    printf("Informe o valor inicial do intrvalo: ");
    scanf("%d", &intervaloI);
    printf("Informe o valor final do intevalo: ");
    scanf("%d", &intervaloF);
    printf("Informe o incremento: ");
    scanf("%d", &incremento);

    if (intervaloI > intervaloF)
    {
        troca = intervaloF;
        intervaloF = intervaloI;
        intervaloI = troca;
    }

    for (i = intervaloI; i <= intervaloF; i = i + incremento)
    {
        printf("\n%d", i);

        if (i % 2 != 0 && i % 35 == 0)
        {
            contI++;
            printf("\tImpar e divisivel por 35");
            soma = soma + i;
        }
    }

    if (contI > 0)
    {
        media = (float)soma / contI;
        printf("\nA media dos numeros impares que sao divisiveis por 35 eh: %.2f", media);
    }

    return 0;
}