/*Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que atende
essa condição. Esse número representa a quantidade de números primos a serem mostrados.*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    int num, i, j, divisores, contPrimo;
    char opcao;

    do
    {
        contPrimo = 0;
        do
        {
            printf("Informe a quantidade de numeros primos que serao mostrados: ");
            scanf("%d", &num);
        } while (num <= 0);

        i = 2;

        do
        {
            divisores = 0;
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    divisores++;
                }
            }
            if (divisores == 2)
            {
                printf("%d\t", i);
                contPrimo++;
            }
            i++;
        } while (contPrimo < num);

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
