/*Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo usuário. Calcule e
mostre o resultado de cada expressão. Reutilize variáveis, ou seja, terá apenas uma variável para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira operação e já
imprime o resultado e assim para todas as demais operações. Atenção para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as expressões e depois
implementar o algoritmo para calcular os resultados.*/

#include <stdio.h>

int main()
{

    int x, y, restDiv1, restDiv2, restDiv3;
    float a, b, c, d;

    printf("Informe o valor para X: ");
    scanf("%d", &x);
    printf("Informe o valor para Y: ");
    scanf("%d", &y);

    a = ((x + y) / y) * (x * x); // corrigir
    b = (x + y) / (x - y);       // corrigir
    c = ((x * x) + (y * y)) / 2; // corrigir
    d = (x * x * x) / (x * x);
    restDiv1 = x % y;
    restDiv2 = x % 3;
    restDiv3 = y % 5;

    printf("\na) %f", a);
    printf("\nb) %f", b);
    printf("\nc) %f", c);
    printf("\nd) %f", d);
    printf("\ne1) %d", restDiv1);
    printf("\ne2) %d", restDiv2);
    printf("\ne3) %d", restDiv3);

    return 0;
}