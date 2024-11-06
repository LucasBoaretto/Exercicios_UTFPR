/*Escreva um programa que imprima todas as possibilidades de que no lançamento de dois dados a soma das
faces seja um valor informado pelo usuário. O usuário deve informar um valor válido entre 2 a 12. Repetir a
leitura até que o usuário informe um valor válido.*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    int valor, possib, i, j;
    char opcao;

    do
    {
        do
        {
            printf("Informe um valor entre 2 a 12: ");
            scanf("%d", &valor);

            if (valor < 2 || valor > 12)
            {
                printf("Valor invalido!\n");
            }
        } while (valor < 2 || valor > 12);

        possib = 0;

        for (i = 1; i <= 6; i++)
        {
            for (j = 6; j >= 1; j--)
            {
                if (i + j == valor)
                {
                    printf("%d + %d = %d\n", i, j, valor);
                    possib++;
                }
            }
        }

        printf("\nNumero de possibilidades: %d", possib);

        do
        {
            printf("\nDeseja digitar outro numero (S/N): ");
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