/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de fábrica). Escrever um programa para, a
partir do custo de fábrica do carro, calcular e mostrar o custo ao consumidor.*/

#include <stdio.h>

int main()
{

    float custoFor, custoCli;
    int percD, perceI;

    printf("Informe o custo de fabrica de um automovel: ");
    scanf("%f", &custoFor);
    printf("Informe a percentagem do distribuidor (0 a 100): ");
    scanf("%d", &percD);
    printf("Informe a percentagem de impostos (0 a 100): ");
    scanf("%d", &perceI);

    custoCli = custoFor + (custoFor * percD / 100) + (custoFor * perceI / 100);

    printf("\nO custo do veiculo ao consumidor eh: R$ %.2f", custoCli);

    return 0;
}