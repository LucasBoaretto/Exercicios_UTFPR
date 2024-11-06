/*Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações
pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo
consorciado e o saldo devedor.*/

#include <stdio.h>

int main()
{

    int prestTot, prestPag;
    float valorF, valorPg, SaldoDev;

    printf("Informe a quantidade total de prestacoes: ");
    scanf("%d", &prestTot);
    printf("Informe a quantidade de prestacoes pagas: ");
    scanf("%d", &prestPag);
    printf("Informe o valor (fixo) da prestacao: ");
    scanf("%f", &valorF);

    valorPg = valorF * prestPag;
    SaldoDev = (valorF * prestTot) - valorPg;

    printf("\nValor total ja pago: R$ %.2f", valorPg);
    printf("\nSaldo devedor: R$ %.2f", SaldoDev);

    return 0;
}