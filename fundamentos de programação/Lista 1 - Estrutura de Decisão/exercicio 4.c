/*Faça um programa que leia três notas de um aluno e calcule a média ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;
b) Se a média obtida está entre 4 e 5,9 informar que o aluno está em recuperação. Nesse caso, ler a nota de
recuperação e calcular a média final (que é a média entre a média anual e a nota de recuperação);
b.1) Se a média final é menor que 5 informar que o aluno está reprovado após recuperação;
b.2) Se é igual ou maior que 5 informar que o aluno está aprovado após recuperação;
c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da recuperação.*/

#include <stdio.h>

int main()
{

    float nota1, nota2, nota3, mediaP, rec, mediaRec;

    printf("\nNota 1: ");
    scanf("%f", &nota1);
    printf("\nNota 2: ");
    scanf("%f", &nota2);
    printf("\nNota 3: ");
    scanf("%f", &nota3);

    mediaP = (nota1 * 0.1) + (nota2 * 0.3) + (nota3 * 0.4);
    printf("\nA media ponderada e de: %.2f", mediaP);

    if (mediaP >= 0 && mediaP <= 10)
    {
        if (mediaP >= 6 && mediaP <= 10)
        {
            printf("\nAprovado");
        }
        else if (mediaP >= 4 && mediaP < 6)
        {
            printf("\nRecuperacao");

            printf("\nNota obtida apos a recuperacao: ");
            scanf("%f", &rec);

            mediaRec = (mediaP + rec) / 2;
            printf("\nA media pos recuperacao e de: %.2f", mediaRec);

            if (mediaRec < 5)
            {
                printf("\nReprovado pos recuperacao");
            }
            else
            {
                printf("\nAprovado pos recuperacao");
            }
        }
        else
        {
            printf("\nReprovado");
        }
    }
    else
    {
        printf("\nMedia invalida");
    }

    return 0;
}