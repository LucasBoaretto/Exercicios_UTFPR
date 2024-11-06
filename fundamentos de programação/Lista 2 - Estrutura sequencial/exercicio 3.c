/*Leia um valor double que representa o troco a ser fornecido por um caixa. Separe a parte inteira (reais) da
parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos. Use a função round, da biblioteca
math.h, para o arredondamento da parte decimal).
*/

#include <stdio.h>
#include <math.h>

int main()
{

    double troco, centavo;
    int valor;

    printf("\nInforme o valor do troco: ");
    scanf("%lf", &troco);

    valor = (int)troco;
    centavo = round((troco - valor) * 100);

    printf("\nO valor informado eh %d reais e %.lf centavos", valor, centavo);

    return 0;
}