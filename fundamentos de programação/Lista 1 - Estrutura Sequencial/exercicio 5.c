/*Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de imposto de
renda e de INSS.*/

#include <stdio.h>

int main()
{

    float salarioB, pINSS, pIR, salarioLiqui;

    printf("Informe o valor do salario bruto: R$ ");
    scanf("%f", &salarioB);
    printf("Informe o percentual de INSS: ");
    scanf("%f", &pINSS);
    printf("Informe o percentual de IR: ");
    scanf("%f", &pIR);

    salarioLiqui = salarioB - ((salarioB * pINSS / 100) + (salarioB * pIR / 100));

    printf("\nSalario liquido: R$ %.2f", salarioLiqui);

    return 0;
}