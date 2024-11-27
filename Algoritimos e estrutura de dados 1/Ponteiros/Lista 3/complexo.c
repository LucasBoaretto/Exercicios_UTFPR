/*Ponteiro em structs - operações com números complexos
Dada a estrutura abaixo:

typedef struct {
    float real, img, mod;
}Jogador;
Implemente uma função que receba um ponteiro do tipo complexo e duas variáveis estáticas do tipo float que represente as partes real e imaginária de um número complexo. A partir das varáveis do tipo float, os campos das estrutura devem ser atualizados.

Em seguida, imprima os campos do "complexo" no seguinte formato: real sinal img i.

Para a implementação do exercício proposto considere o seguinte protótipo de função e a equação abaixo:

void atualizar_complexo(complexo *c, float real, float img);
Módulo de um número complexo:

z = sqrt(real * real + img * img);
Para o cálculo da raiz quadrada, você pode utilizar a função sqrt da biblioteca math.h.

Input Format

Na primeira linha deve ser lido dois dados do tipo float.

Constraints
-------------

Output Format

Na primeira linha deve ser impresso o número complexo no seguinte formato: real sinal_numero_imaginário img i

Na segunda linha, deve ser impresso o módulo do número complexo.

Para a impressão de floats, considere a precisão de uma casa decimal (%.1f).

Sample Input 0

3.0 4.0
Sample Output 0

3.0+4.0i
5.0
Sample Input 1

3.0 -4.0
Sample Output 1

3.0-4.0i
5.0*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float real, img, mod;
} Complexo; // o enunciado do exercicio está errado, foi trocado com de outro exercicio;

void atualizar_complexo(Complexo *c, float real, float img);
void imprimirComplexo(Complexo *c);

int main()
{
    float real, img;
    scanf("%f %f", &real, &img);

    Complexo c;
    atualizar_complexo(&c, real, img);

    imprimirComplexo(&c);

    return 0;
}

void atualizar_complexo(Complexo *c, float real, float img)
{
    c->img = img;
    c->real = real;
    c->mod = sqrt(real * real + img * img);
}

void imprimirComplexo(Complexo *c)
{
    if (c->img < 0)
    {
        printf("%.1f%.1fi", c->real, c->img);
    }
    else
    {
        printf("%.1f+%.1fi", c->real, c->img);
    }
    printf("\n%.1f\n", c->mod);
}