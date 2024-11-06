
#include <stdio.h>
#include <ctype.h>

int main()
{

    int num, maior, menor, trava, i, soma, divisores, j;
    char opcao;

    do
    {
        trava = 0;
        do
        {
            printf("Informe um numero (zero para sair): ");
            scanf("%d", &num);

            if (trava == 0)
            {
                maior = num;
                menor = num;
                trava = 1;
            }
            if (maior < num && num != 0)
            {
                maior = num;
            }
            else if (menor > num && num != 0)
            {
                menor = num;
            }

        } while (num != 0);

        if (maior != 0 && menor != 0)
        {
            printf("Maior: %d\tmenor: %d\n", maior, menor);
        }

        divisores = 0;
        for (j = 1; j <= menor; j++)
        {
            if (menor % j == 0)
            {
                divisores++;
            }
        }
        if (menor != 0)
        {
            if (divisores == 2)
            {
                printf("\n%d eh primo\n", menor);
            }
            else
            {
                printf("\n%d nao eh primo\n", menor);
            }
        }

        soma = 0;
        for (i = 1; i < maior; i++)
        {
            if (maior % i == 0)
            {
                soma = soma + i;
            }
        }
        if (maior != 0)
        {
            if (maior == soma)
            {
                printf("\n%d eh perfeito", maior);
            }
            else
            {
                printf("\n%d nao eh perfeito", maior);
            }
        }

        do
        {
            printf("\nExecutar novamente (s/S para sim)?:");
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