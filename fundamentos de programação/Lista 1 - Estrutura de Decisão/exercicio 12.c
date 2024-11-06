/*Faça um programa que solicite ao usuário o valor do salário de um funcionário e apresente o menu a
seguir e permita ao usuário escolher a opção desejada e mostre o resultado. Verifique a possibilidade de
opção inválida e não se preocupe com restrições, como salário negativo. Use switch - case, if e if - else para a
solução.*/

#include <stdio.h>

int main()
{

    float salario, imp, salarioF;
    int opcao, aumento;

    printf("\nInforme o valor do salario: ");
    scanf("%f", &salario);

    printf("\n1 - Imposto");
    printf("\n2 - Novo Salario");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            if (salario < 1000)
            {
                imp = salario * 0.05;
                printf("\nO imposto sobre o salario eh de: R$ %.2f", imp);
            }
            else if (salario >= 1000 && salario <= 1500)
            {
                imp = salario * 0.1;
                printf("\nO imposto sobre o salario eh de: R$ %.2f", imp);
            }
            else
            {
                imp = salario * 0.15;
                printf("\nO imposto sobre o salario eh de: R$ %.2f", imp);
            }
            break;
        case 2:
            if (salario < 1000)
            {
                aumento = 75;
                salarioF = salario + aumento;
                printf("\nO salario de R$ %.2f teve um aumento de R$ %d, o salario final eh de: R$ %.2f", salario, aumento, salarioF);
            }
            else if (salario >= 1000 && salario <= 1500)
            {
                aumento = 100;
                salarioF = salario + aumento;
                printf("\nO salario de R$ %.2f teve um aumento de R$ %d, o salario final eh de: R$ %.2f", salario, aumento, salarioF);
            }
            else
            {
                aumento = 150;
                salarioF = salario + aumento;
                printf("\nO salario de R$ %.2f teve um aumento de R$ %d, o salario final eh de: R$ %.2f", salario, aumento, salarioF);
            }
            break;
        default:
                printf("Opcao invalida");
            break;
    }

    return 0;
}