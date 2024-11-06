/*Fazer uma função para verificar se um número equivale a soma dos n primeiros ímpares iniciando em 1.
Por exemplo, 9 é um número que tem essa característica porque 1 + 3 + 5 = 9 (soma dos n primeiros
números ímpares iniciando em 1). Essa função recebe como parâmetro um valor inteiro e retorna 's' se o
número equivale a soma dos n primeiros ímpares ou 'n' caso não.
Fazer um programa que use essa função para:
a) Ler um número inteiro informado pelo usuário é verificar se o mesmo tem essa característica.
b) Mostrar todos os números que têm ou não têm essa característica e pertencem a um intervalo informado
pelo usuário.*/

#include <stdio.h>
#include <ctype.h>

char somaImpar(int x);
void mostrarImpar(int x);

int main()
{

    char opcao, reset;
    int num, num2, i;

    do
    {
        printf("1 - Verifica se numero equivale a soma dos impares\n");
        printf("2 - Verifica numeros que equivalem a soma dos impares\n");
        do
        {
            printf("Opcao: ");
            fflush(stdin);
            scanf("%c", &opcao);
            if (opcao != '1' && opcao != '2')
            {
                printf("Opcao invalida!\n");
            }
        } while (opcao != '1' && opcao != '2');

        switch (opcao)
        {
        case '1':
            do
            {
                printf("Informe um numero: ");
                scanf("%d", &num);
                if (num < 0)
                {
                    printf("Valor invalido!\n");
                }
            } while (num < 0);

            printf("%d = ", num);
            mostrarImpar(num);
            if (somaImpar(num) == 's')
            {
                printf("=> Equivale a soma dos impares\n");
            }
            else
            {
                printf("=> Nao equivale a soma dos impares\n");
            }
            break;
        case '2':
            printf("\nInforme o valor do limite inferior de um intervalo: ");
            scanf("%d", &num);
            printf("Informe o valor do limite superior de um intervalo: ");
            scanf("%d", &num2);

            for (i = num; i <= num2; i++)
            {
                printf("%d = ", i);
                mostrarImpar(i);
                if (somaImpar(i) == 's')
                {
                    printf("=> Equivale a soma dos impares\n");
                }
                else
                {
                    printf("=> Nao equivale a soma dos impares\n");
                }
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

char somaImpar(int x)
{

    int i, soma = 0;
    char resultado = 'n';

    for (i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            soma = soma + i;
        }
        if (soma == x)
        {
            resultado = 's';
            break;
        }
    }

    return resultado;
}

void mostrarImpar(int x)
{
    int i, soma = 0;

    for (i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d  ", i);
            soma = soma + i;
        }
        if (soma == x)
        {
            break;
        }
    }
}
