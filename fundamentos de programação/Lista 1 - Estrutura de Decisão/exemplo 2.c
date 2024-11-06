#include <stdio.h>

int main()
{

    float nota1, nota2, media, recuperacao, mediaF;

    printf("\nNota 1: ");
    scanf("%f", &nota1);

    printf("\nNota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("\nMedia: %.1f", media);

    if (media >= 0 && media <= 10)
    {
        if (media >= 6 && media <= 10)
        {
            printf("\nAprovado!");
        }
        else if (media >= 4 && media < 6)
        {
            printf("\nEm recuperacao!");

            printf("\nInforme a nota da recuperacao: ");
            scanf("%f", &recuperacao);

            mediaF = (media + recuperacao) / 2;
            printf("\nMedia final apos recuperacao: %.2f", mediaF);

            if (mediaF >= 5)
            {
                printf("\nAprovado apos recuperacao!");
            }
            else
            {
                printf("\nReprovado apos recuperacao!");
            }
        }
        else
        {
            printf("\nReprovado!");
        }
    }
    else
    {
        printf("Valor invalido para calcular a media!");
    }

    return 0;
}