/*Fazer um programa para mostrar os divisores, calcular a quantidade deles e mostrar essa quantidade para
os números compreendidos entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o
usuário deverá fornecer um número positivo entre 2 e 100. Ao final, mostrar a maior quantidade de divisores.*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    int num, divisor, i, j;
    char opcao;

    do
    {
        do
        {
            printf("Informe um numero entre 2 e 100: ");
            scanf("%d", &num);

            if (num < 2 && num > 100)
            {
                printf("Valor invalido!\n");
            }

        } while (num < 2 && num > 100);

        for (i = num; i <= (num + 10); i++)
        {
            printf("%d ==> ", i);
            divisor = 0;
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    printf("%d, ", j);
                    divisor++;
                }
            }
            printf("%d divisores\n", divisor);
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