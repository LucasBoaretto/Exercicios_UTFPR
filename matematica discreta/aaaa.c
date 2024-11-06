#include <stdio.h>
#include <ctype.h>

int main()
{
    char opcao;

    do
    {

        int i, j;
        float notas[3][2];

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
            {
                do
                {
                    printf("Informe a nota %d do aluno %d: ", j + 1, i + 1);
                    scanf("%f", &notas[i][j]);
                    if (notas[i][j] < 0 || notas[i][j] > 10)
                    {
                        printf("Nota invalida, insira um valor entre 0 e 10!\n");
                    }

                } while (notas[i][j] < 0 || notas[i][j] > 10);
            }
        }

        printf("\n=== MEDIA ===\n");
        printf("ALUNO\tMEDIA");
        float mediaA1, mediaA2, mediaA3;
        mediaA1 = (notas[0][0] + notas[0][1]) / 2;
        mediaA2 = (notas[1][0] + notas[1][1]) / 2;
        mediaA3 = (notas[2][0] + notas[2][1]) / 2;
        float medias[3] = {mediaA1, mediaA2, mediaA3};
        int mediaMaior = 0, mediaMenor = 0;
        for (i = 0; i < 3; i++)
        {
            printf("\n%d\t%.2f", i + 1, medias[i]);
            if (medias[i] >= 7)
            {
                mediaMaior++;
            }
            else
                mediaMenor++;
        }
        printf("\nNumero de alunos com media maior que sete: %d", mediaMaior);
        printf("\nNumero de alunos com a media menor que seta: %d", mediaMenor);

        do
        {
            printf("\nExecutar novamente (S ou N)?:");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = toupper(opcao);

            if (opcao != 'S' && opcao != 'N')
            {
                printf("Opcao invalida!\n");
            }
        } while (opcao != 'S' && opcao != 'N');
    } while (opcao == 'S');

    return 0;
}