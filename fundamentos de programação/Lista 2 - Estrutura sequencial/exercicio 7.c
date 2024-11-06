/*Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de
descontos. Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo como no
exemplo a seguir.*/

#include <stdio.h>

int main()
{

    float salario, salarioAumentado, salarioDesc, aumento, desconto, parteDec;
    int salarioLiqui;

    printf("\nInforme o valor do salario: ");
    scanf("%f", &salario);
    printf("\nInforme o percentual de aumento (Ex: 10 para 10%%): ");
    scanf("%f", &aumento);
    printf("\nInforme o percentual de desconto (Ex: 5 para 5%%): ");
    scanf("%f", &desconto);

    salarioAumentado = salario + (salario * (aumento / 100));
    salarioDesc = salarioAumentado - (salarioAumentado * (desconto / 100));

    printf("\nSalario aumentado: %.2f", salarioAumentado);
    printf("\nSalario liquido: %.2f", salarioDesc);

    salarioLiqui = (int)salarioDesc;
    parteDec = (salarioDesc - salarioLiqui) * 100;

    printf("\nO salario liquido eh: %d reais e %.f centavos", salarioLiqui, parteDec);

    return 0;
}