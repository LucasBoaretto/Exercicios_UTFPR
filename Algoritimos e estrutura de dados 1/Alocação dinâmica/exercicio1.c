/*Alocação dinâmica - vetor progressão aritmética
Implemente uma função que receba dois números inteiros, sendo uma para o tamanho do vetor (n) e a outra para razão (r).
A função deverá retornar um vetor de tamanho n ordenado de forma crescente representado uma sequência de elementos
de uma progressão aritmética iniciada por 0.

Para a implementação da solução, considere o protótipo de função abaixo:


int * prog_arit(int n, int r);
Input Format

Na primeira linha devem ser lidos dois números inteiros, sendo o primeiro referente ao tamanho do vetor e o segundo, à razão da progressão aritmética.

Constraints

.

Output Format

Vetor que represente uma sequência de elementos de uma progressão aritmética.

Sample Input 0

5 2
Sample Output 0

0 2 4 6 8*/

#include <stdio.h>
#include <stdlib.h>

int *prog_arit(int n, int r);

int main()
{
    int n, r;

    printf("Digite o tamanho do vetor e a razão da progressão: ");
    scanf("%d %d", &n, &r);

    int *vetor = prog_arit(n, r);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}

int *prog_arit(int n, int r)
{
    int *vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro: Não foi possível alocar memória.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        vetor[i] = i * r;
    }

    return vetor;
}