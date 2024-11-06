/*Criar função para:
a) Receber, por parâmetro, um número inteiro e positivo e retornar a quantidade de divisores que esse
número possui.
b) Mostrar os divisores de um número. Essa função recebe como parâmetro o número e mostra os divisores
de 1 até o número passado como parâmetro da função.
c) Receber, por parâmetro, um número positivo e retornar a soma dos divisores que esse número possui.
d) Receber, por parâmetro, dois números e retornar o Máximo Divisor Comum dos dois números.
Salvar todas as funções dentro de uma biblioteca chamada Divisores.h. Use a biblioteca "Divisores.h" em um
programa para gerar o seguinte menu:
1 - Quantidade de divisores de um número
2 - Divisores de um número
3 - Divisores, quantidade e soma de um intervalo
*/

#include <stdio.h>
#include <ctype.h>
#include "divisores.h"

int main()
{

    char reset, opcao;
    int num, contDiv, num2, i, retSoma;

    do
    {
        printf("1 - Quantidade de divisores de um numero\n");
        printf("2 - Divisores de um numero\n");
        printf("3 - Divisores, quantidade e soma de um intervalo\n");

        do
        {
            printf("Opcao: ");
            fflush(stdin);
            scanf("%c", &opcao);

            if (opcao != '1' && opcao != '2' && opcao != '3')
            {
                printf("Opcao invalida!\n");
            }

        } while (opcao != '1' && opcao != '2' && opcao != '3');

        switch (opcao)
        {
        case '1':
            do
            {
                printf("\nInforme um numero para mostrar a quantidade de divisores: ");
                scanf("%d", &num);
            } while (num < 0);

            contDiv = 0;
            contDiv = contDivisores(num);
            printf("%d possui %d divisores\n", num, contDiv);
            break;
        case '2':
            do
            {
                printf("\nInforme um numero para mostrar os seus divisores: ");
                scanf("%d", &num);
            } while (num < 0);
            mostraDivisores(num);
            break;
        case '3':
            do
            {
                printf("\nInforme o limite inferior: ");
                scanf("%d", &num);
                printf("Informe o limite superior: ");
                scanf("%d", &num2);
            } while (num < 0);
            contDiv = 0;
            for (i = num; i <= num2; i++)
            {
                printf("%d - ", i);
                mostraDivisores(i);
                contDiv = contDivisores(i);
                retSoma = divSoma(i);
                printf("=> Qtde %d => Soma: %d\n", contDiv, retSoma);
            }
            break;
        }

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