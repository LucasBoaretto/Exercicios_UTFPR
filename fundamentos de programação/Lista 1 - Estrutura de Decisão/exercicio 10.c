/*Fazer o programa para o algoritmo representado no fluxograma*/

#include <stdio.h>

int main()
{

    float salarioBase, gratificacao, salarioBruto, salarioLiqui, ir;

    printf("Informe o salario base: ");
    scanf("%f", &salarioBase);
    printf("Informe a gratificacao(Ex: 10 para 10%%): ");
    scanf("%f", &gratificacao);

    salarioBruto = salarioBase + (salarioBase * (gratificacao / 100));

    if (salarioBruto < 1000)
    {
        ir = salarioBruto * (15 / 100);
    }
    else
    {
        ir = salarioBruto * (20 / 100);
    }

    salarioLiqui = salarioBruto - ir;

    printf("O salario liquido eh de: %.3f", salarioLiqui);

    return 0;
}