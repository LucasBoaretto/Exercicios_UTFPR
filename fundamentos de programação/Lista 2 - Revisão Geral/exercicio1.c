/*Gerar um vetor que não contenha números repetidos, com 10 elementos aleatórios entre 0 e 50. Utilizar
uma função para verificar se cada elemento do vetor é ou não um número primo. Essa função retorna 0 para
indicar que o número é primo ou 1 para indicar que o número não é primo. Criar uma matriz 10x3 onde a
primeira coluna vai armazenar o índice do vetor, a segunda coluna vai armazenar o elemento do vetor e a
terceira coluna vai armazenar 0 se o elemento do vetor for um número primo ou 1 caso o elemento do vetor
não seja um número primo. Fazer a média dos números primos encontrados no vetor. */

#include "bibliotecas.h"

int primo(int x);

int main()
{

    char reset;
    int tam = 10, vet[tam], i, verificarPrimo;
    float media;

    do
    {
        printf("\n==== VETOR ====\n");
        gerarVetorSemRepeticao(vet, tam, 50);
        mostrarVetorInteiros(vet, tam);
        printf("\n");

        printf("\nINDICE    NUMERO  PRIMO\n");
        int matriz[10][3], soma = 0, contPrimo = 0;
        for (i = 0; i < tam; i++)
        {
            matriz[i][0] = i;
            printf("%d         ", matriz[i][0]);
            matriz[i][1] = vet[i];
            printf("%2d      ", matriz[i][1]);
            verificarPrimo = primo(vet[i]);
            if (verificarPrimo == 0)
            {
                soma = soma + vet[i];
                contPrimo++;
            }
            matriz[i][2] = verificarPrimo;
            printf("%d", matriz[i][2]);
            printf("\n");
        }

        media = (float)soma / contPrimo;
        printf("\nMedia dos numeros primos %.2f\n", media);

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

int primo(int x)
{
    int i, contDiv = 0;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            contDiv++;
            break;
        }
    }
    return contDiv;
}