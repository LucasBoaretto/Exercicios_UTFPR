/*Sendo n um número positivo, apresentar as n primeiras raízes quadradas exatas. A função para obter a
raiz quadrada é a sqrt() e está na biblioteca math.h.*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{

    int num, i, raiz, elevado;
    char opcao;

    do
    {
        do
        {
            printf("Informe o valor de n: ");
            scanf("%d", &num);

            if (num < 0)
            {
                printf("Valor invalido!\n");
            }
        } while (num < 0);

        for (i = 1; i <= num; i++)
        {
            elevado = pow(i, 2);
            raiz = sqrt(elevado);
            printf("Raiz quadrada de %d ==> %d\n", elevado, raiz);
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