/* Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
Renda anual Alíquota*
Até R$ 10.000,00 - 0%
> R$ 10.000,00 e <= R$ 25.000,00 - 10%
Acima de R$ 25.000,00 - 25%
*Alíquota é o percentual para realizar o cálculo do imposto de renda a ser pago.
Se informado valor negativo, não realizar o cálculo e informar o usuário.*/

#include <stdio.h>

int main()
{

    float salario, impRend, aliquota;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if (salario >= 0)
    {
        if (salario <= 10000)
        {
            aliquota = 0;
        }
        else if (salario > 10000 && salario <= 25000)
        {
            aliquota = 10;
        }
        else
        {
            aliquota = 25;
        }

        impRend = salario * (aliquota / 100);
        printf("O imposto de renda a ser pago e de: %.2f", impRend);
    }
    else
    {
        printf("Valor negativo, impossivel realizar a operacao");
    }
    return 0;
}