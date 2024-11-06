/*Um professor atribui pesos de 1 a 3 para as notas de três avaliações, respectivamente. Faça um algoritmo
que receba as notas e calcule e mostre a média ponderada. A média e as notas serão valores do tipo float.
Média Ponderada = (nota1 * 1 + nota2 * 2 + nota3 * 3)/(1+2+3)
*/

#include <stdio.h>

int main()
{

    int nota1, nota2, nota3;
    float media;

    printf("Informe a primeira nota: ");
    scanf("%d", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%d", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%d", &nota3);

    media = (nota1 * 1 + nota2 * 2 + nota3 * 3) / (1 + 2 + 3);

    printf("A nota final eh: %.2f", media);

    return 0;
}