/*Ponteiros - parte inteira e parte fracionária
Implemente uma função que receba três variáveis: duas do tipo float e uma do tipo int.
A função deverá retornar a parte inteira (int) e a fracionária (float) de um número do real. Para isso utilize o seguinte protótipo:

void frac(float n, int * in, float * fr)

Input Format
A primeira linha da entrada contém um único inteiro N, indicando o número de casos de teste.

Constraints
Os floats devem ser impressos considerando 3 casas decimais, ou seja, usando ".3f"

Output Format
Para cada caso de teste de entrada deverá ser apresentada uma linha de saída, no seguinte formato: N=n I=in F=fr

Sample Input 0
3
2.500
8.650
15.225

Sample Output 0
N=2.500 I=2 F=0.500
N=8.650 I=8 F=0.650
N=15.225*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void frac(float n, int *in, float *fr);

int main()
{
    float n, fr;
    int N, in;
    scanf("%d", &N);

    do
    {
        scanf("%f", &n);
        frac(n, &in, &fr);
        printf("N=%.3f I=%d F=%.3f\n", n, in, fr);
        N--;
    } while (N != 0);

    return 0;
}

void frac(float n, int *in, float *fr)
{
    *in = (int)n;
    *fr = n - *in;
}