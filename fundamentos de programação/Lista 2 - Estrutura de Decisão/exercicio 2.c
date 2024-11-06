/*Uma árvore de decisão obtém a decisão pela execução de uma sequência de testes. Cada nó interno da árvore
corresponde a um teste do valor de uma das propriedades e os ramos deste nó são identificados com os possíveis
valores do teste. Cada nó folha da árvore especifica o valor de retorno se a folha for atingida. A figura a seguir
apresenta um exemplo fictício de árvore de decisão, tomando atributos de clientes de uma instituição financeira.
Elabore um programa que implemente essa árvore de decisão. As entradas podem ser do tipo char, portanto, considere
a primeira letra de cada palavra como entrada. Caso o usuário informe um caractere diferente dos aceitáveis, apresente
a mensagem "Caractere inválido".*/

#include <stdio.h>

int main()
{

    char dec1, dec2;

    printf("\nVoce possui saldo em conta corrente? ");
    printf("\nS para sim N para nao: ");
    fflush(stdin);
    scanf("%c", &dec1);

    switch (dec1)
    {
    case 's':
    case 'S':
        printf("\nCliente sem risco");
        break;
    case 'n':
    case 'N':
        printf("\nDeseja fazer aplicacoes?");
        printf("\nS para sim e N para nao: ");
        fflush(stdin);
        scanf("%c", &dec2);

        switch (dec2)
        {
        case 's':
        case 'S':
            printf("Cliente sem risco");
            break;
        case 'n':
        case 'N':
            printf("Cliente com risco");
            break;

        default:
            printf("\nOpcao invalida");
            break;
        }
        break;

    default:
        printf("\nOpcao invalida");
        break;
    }

    return 0;
}