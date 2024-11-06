/*Considere a estrutura para representar um número complexo:

    typedef struct{
     int real;
     int img;
    }NComplexo;
Implemente funções para:
Somar dois números complexos.
Subtrair dois números complexos.
Multiplicar dois números complexos.
Retornar o conjugado de um número complexo.
Dividir dois números complexos.
Calcular o módulo de um número complexo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    float real;
    float img;

} NComplexo;

NComplexo conjugadoComplexo(NComplexo n);
float calcularModulo(NComplexo c);
NComplexo dividirComplexos(NComplexo c1, NComplexo c2);
NComplexo multiplicarComplexos(NComplexo c1, NComplexo c2);
NComplexo subtrairNumeros(NComplexo n1, NComplexo n2);
NComplexo somarNumeros(NComplexo n1, NComplexo n2);
void imprimirResultados(NComplexo soma, NComplexo subtracao, NComplexo multiplicacao, NComplexo conjulgado, NComplexo divisao);

int main()
{

    NComplexo n1 = {8, 10};
    NComplexo n2 = {14, 3};
    NComplexo soma = somarNumeros(n1, n2);
    NComplexo subtracao = subtrairNumeros(n1, n2);
    NComplexo multiplicacao = multiplicarComplexos(n1, n2);
    NComplexo conjulgado = conjugadoComplexo(n1);
    NComplexo divisao = dividirComplexos(n1, n2);
    double modulo = calcularModulo(n1);

    imprimirResultados(soma, subtracao, multiplicacao, conjulgado, divisao);
    printf("\nO modulo de um numero complexo eh: %.2f", modulo);

    return 0;
}

NComplexo somarNumeros(NComplexo n1, NComplexo n2)
{
    NComplexo resultado;

    resultado.real = n1.real + n2.real;
    resultado.img = n1.img + n2.img;

    return resultado;
}

NComplexo subtrairNumeros(NComplexo n1, NComplexo n2)
{
    NComplexo resultado;

    resultado.real = n1.real - n2.real;
    resultado.img = n1.img - n2.img;

    return resultado;
}

NComplexo multiplicarComplexos(NComplexo c1, NComplexo c2)
{
    NComplexo resultado;
    resultado.real = (c1.real * c2.real) - (c1.img * c2.img);
    resultado.img = (c1.real * c2.img) + (c1.img * c2.real);
    return resultado;
}

NComplexo dividirComplexos(NComplexo c1, NComplexo c2)
{
    NComplexo resultado;
    int denominador = c2.real * c2.real + c2.img * c2.img;

    resultado.real = (c1.real * c2.real + c1.img * c2.img) / denominador;
    resultado.img = (c1.img * c2.real - c1.real * c2.img) / denominador;

    return resultado;
}

float calcularModulo(NComplexo c)
{
    return sqrt(c.real * c.real + c.img * c.img);
}

NComplexo conjugadoComplexo(NComplexo n)
{
    NComplexo resultado;

    resultado.real = n.real;
    resultado.img = -n.img;

    return resultado;
}

void imprimirResultados(NComplexo soma, NComplexo subtracao, NComplexo multiplicacao, NComplexo conjulgado, NComplexo divisao)
{
    printf("\nA soma dos dois numeros eh: %.f + %.fi", soma.real, soma.img);
    printf("\nA subtracao dos dois numeros eh: %.f + %.fi", subtracao.real, subtracao.img);
    printf("\nA multiplicacao dos dois numeros eh: %.f + %.fi", multiplicacao.real, multiplicacao.img);
    printf("\nO conjulgado de um dos numeros imaginarios eh: %.f + %.fi", conjulgado.real, conjulgado.img);
    printf("\nA divisao dos dos dois numeros eh: %.2f + %.2fi", divisao.real, divisao.img);
}