/*Uma árvore A tem 1,50 metros e cresce 2 centímetros por ano, enquanto uma árvore B tem 1,10 metros e cresce 3 centímetros
por ano. Construa um programa que calcule e imprima quantos anos serão necessários para que a árvore B seja maior que a
árvore A.
*/

#include <stdio.h>

int main()
{
    float alturaA = 1.50, alturaB = 1.10;
    int anos = 0;

    while (alturaB <= alturaA)
    {
        alturaA = alturaA + 0.02;
        alturaB = alturaB + 0.03;
        anos++;
    }
    printf("Altura final da arvore A = %.2f\n", alturaA);
    printf("Altura final da arvore B = %.2f\n", alturaB);
    printf("\nSerao necessarios %d anos para que a arvore B seja maior que a arvore A.", anos);

    return 0;
}