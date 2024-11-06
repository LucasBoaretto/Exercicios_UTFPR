/*Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que atende
essa  condição.  Esse  número  representa  a  quantidade  de  números  ímpares  a  serem  mostrados.  Apresentar
esses  valores  n  por  linha,  sendo  n  um  número  maior  que  zero,  informado  pelo  usuário.  Os  valores  são
apresentados separados por tabulação. Fazer a média dos números ímpares mostrados.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    int num, i, cont, soma, qtdeImpar, contLinha;
    float media;
    char opcao;

    do
    {
        cont = 0;
        do
        {
            printf("Informe o numero de impares que deseja mostrar: ");
            scanf("%d", &num);
            printf("Quantos impares por linha deseja mostrar: ");
            scanf("%d", &qtdeImpar);
        } while (num < 0);

        contLinha = 0;
        soma = 0;
        i = 1;
        do
        {
            if (i % 2 != 0)
            {
                contLinha++;
                printf("%d\t", i);
                cont++;
                soma = soma + i;
                if (contLinha % qtdeImpar == 0)
                {
                    printf("\n");
                }
            }
            i = i + 2;
        } while (cont < num);

        if (cont > 0)
        {
            media = (float)soma / cont;
            printf("\nA media dos impares eh: %.2f", media);
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