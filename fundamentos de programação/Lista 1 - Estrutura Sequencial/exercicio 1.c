/*Escreva um algoritmo que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
e calcule o seu volume (cm3
), cuja fórmula é:
Volume = comprimento * largura * altura
*/
#include <stdio.h>

int main()
{

    int comp, larg, alt;
    float volume;

    printf("Informe o comprimento (cm): ");
    scanf("%d", &comp);
    printf("Informe a largura (cm): ");
    scanf("%d", &larg);
    printf("Informe a altura (cm): ");
    scanf("%d", &alt);

    volume = comp * larg * alt;

    printf("O volume eh: %.2f cm3", volume);

    return 0;
}
