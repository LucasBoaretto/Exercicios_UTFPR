/*Elaborar um programa para automatizar o caixa de uma loja. Ler a quantidade e o valor unitário de cada produto. Calcular o valor
total da compra. Informar esse valor para o usuário e o usuário informa o valor para pagamento. O programa calcula o troco e
informa-o ao usuário em notas de 10, 5, 1 e os centavos. Prosseguir a leitura enquanto a quantidade for maior que zero. Se
informado zero ou valor negativo para a quantidade, não ler o valor unitário.
*/
#include <stdio.h>

int main()
{
    int qtdeProd, parteDez, parteCinco, parteUm, resto;
    float valorUni, troco, valorPag, soma = 0, parteCent;

    do
    {
        printf("Informe a quantidade de um produto: ");
        scanf("%d", &qtdeProd);

        if (qtdeProd > 0)
        {
            printf("Informe o valor unitario do produto: ");
            scanf("%f", &valorUni);
            soma = soma + (qtdeProd * valorUni);
        }

    } while (qtdeProd > 0);

    printf("TOTAL DA COMPRA: R$ %.2f\n", soma);

    printf("\nInforme o valor pago pelo cliente: ");
    scanf("%f", &valorPag);

    troco = valorPag - soma;
    printf("TROCO: %.2f\n", troco);

    printf("\no valor do troco sera devolvido com:");

    parteDez = (int)troco / 10;
    resto = (int)troco % 10;
    parteCinco = resto / 5;
    parteUm = resto % 5;
    parteCent = troco - (int)troco;

    printf("\n%d nota(s) de 10 reais\n", parteDez);
    printf("%d nota(s) de 5 reais\n", parteCinco);
    printf("%d nota(s) de 1 real\n", parteUm);
    if (parteCent > 0)
    {
        printf("e %.2f centavos", parteCent);
    }

    return 0;
}