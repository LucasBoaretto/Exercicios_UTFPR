/*Faça um programa para mostrar os primos e calcular a quantidade deles para os números compreendidos
entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um
número positivo.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    char opcao;
    int num, i, j, k, contPrimos, divisores;

    do
    {
        do
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);

            if (num < 0)
            {
                printf("Valor invalido!\n");
            }
        } while (num < 0);

        for (i = num; i <= (num + 10); i++)
        {
            printf("%2d ==> ", i);
            contPrimos = 0;
            for (j = 2; j <= i; j++)
            {
                divisores = 0;
                for (k = 1; k <= j; k++)
                {
                    if (j % k == 0)
                    {
                        divisores++;
                    }
                }
                if (divisores == 2)
                {
                    printf("%d ", j);
                    contPrimos++;
                }
            }
            printf("==> %d primo(s)\n", contPrimos);
        }

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