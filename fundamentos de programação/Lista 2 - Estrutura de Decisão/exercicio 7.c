/* Faça um programa que receba o salário de um funcionário e o código correspondente ao seu cargo atual e mostre o
cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir:*/

#include<stdio.h>

int main(){

    float salario, salarioF1, salarioF2, salarioF3, salarioF4;
    int codigo;

    printf("\nCodigo \t Cargo  \t Percentual");
    printf("\n1 \t Escrituario \t 50%%");
    printf("\n2 \t Secretario \t 35%%");
    printf("\n3 \t Caixa  \t 20%%");
    printf("\n4 \t Gerente \t 10%%");
    printf("\n5 \t Diretor \t Nao tem aumento\n");

    printf("\nInforme o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Informe o cargo do funcionario (1,2,3,4 e 5): ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        salarioF1 = salario * 0.5;
        printf("\nO cargo eh Escrituario.");
        printf("\nO valor do aumento eh: R$%.2f", salarioF1);
        printf("\nO novo salario eh: R$%.2f", salario+salarioF1);
        break;
    case 2:
        salarioF2 = salario * 0.35;
        printf("\nO cargo eh Secretario.");
        printf("\nO valor do aumento eh: R$%.2f", salarioF2);
        printf("\nO novo salario eh: R$%.2f", salario+salarioF2);
        break;
    case 3:
        salarioF3 = salario * 0.2;
        printf("\nO cargo eh Caixa.");
        printf("\nO valor do aumento eh: R$%.2f", salarioF3);
        printf("\nO novo salario eh: R$%.2f", salario+salarioF3);
        break;
    case 4:
        salarioF4 = salario * 0.1;
        printf("\nO cargo eh Gerente.");
        printf("\nO valor do aumento eh: R$%.2f", salarioF4);
        printf("\nO novo salario eh: R$%.2f", salario+salarioF4);
        break;
    case 5:
        printf("\nO cargo eh Escrituario");
        printf("\nNao houve aumento.");
        printf("\nSalario manteve o mesmo: R$%.2f", salario);
        break;
    
    default:
        printf("\nCodigo invalido.");
        break;
    }

    return 0;
}