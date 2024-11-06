/*Ler uma string de até 100 caracteres, contar e exibir a quantidade de cada uma das vogais existentes
nessa string. Armazenar essas quantidades em um vetor. É indispensável armazenar a quantidade no vetor à
medida que a string é percorrida na forma vetVogais[indice]++. Portanto, o vetor que armazena a
quantidade de vogais deve ser inicializado com zero antes de ser utilizado.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texto[100], reset;
    int i, vetorVogais[5];

    do
    {
        printf("\nInforme um texto com ate 100 caracteres: ");
        fflush(stdin);
        gets(texto);

        for (i = 0; i < 5; i++)
        {
            vetorVogais[i] = 0;
        }

        printf("VOGAL     QUANTIDADE\n==================\n");
        for (i = 0; texto[i] != '\0'; i++)
        {
            switch (texto[i])
            {
            case 'a':
            case 'A':
                vetorVogais[0]++;
                break;
            case 'e':
            case 'E':
                vetorVogais[1]++;
                break;
            case 'i':
            case 'I':
                vetorVogais[2]++;
                break;
            case 'o':
            case 'O':
                vetorVogais[3]++;
                break;
            case 'u':
            case 'U':
                vetorVogais[4]++;
                break;
            }
        }
        printf("A/a           %d\n", vetorVogais[0]);
        printf("E/e           %d\n", vetorVogais[1]);
        printf("I/i           %d\n", vetorVogais[2]);
        printf("O/o           %d\n", vetorVogais[3]);
        printf("U/u           %d\n", vetorVogais[4]);

        do
        {
            printf("\nExecutar novamente (S ou N)?:");
            fflush(stdin);
            scanf("%c", &reset);
            reset = toupper(reset);

            if (reset != 'S' && reset != 'N')
            {
                printf("Opcao invalida!\n");
            }
        } while (reset != 'S' && reset != 'N');

    } while (reset == 'S');

    return 0;
}