/* Fazer um programa que leia um valor double que representa o salário de uma pessoa. Apresente
separadamente os reais (parte inteira) e os centavos (parte decimal).*/

#include <stdio.h>

int main()
{

    double salario, centavos;
    int valor;

    printf("Informe o valor do salario: ");
    scanf("%lf", &salario);

    valor = (int)salario;
    centavos = (salario - valor) * 100;

    printf("\nSalario informado: R$ %.2lf", salario);
    printf("\nReais: %d", valor);
    printf("\nCentavos: %.lf", centavos);

    return 0;
}