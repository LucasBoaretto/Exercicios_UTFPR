#include <stdio.h>

int main()
{

    float soma = 0, media;
    int i, tam;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    float notas[tam];

    // alimentar o vetor
    for (i = 0; i < tam; i++)
    {
        printf("Informe a nota %d do aluno: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    // imprimir o vetor
    for (i = 0; i < tam; i++)
    {
        printf("\nNota [%d] = %.2f", i, notas[i]);
    }

    media = soma / tam;
    printf("\nMedia: %.2f\n", media);

    return 0;
}