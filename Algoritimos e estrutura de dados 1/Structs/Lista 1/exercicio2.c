/*Defina uma struct para triângulo equilátero, para qual deve conter o comprimento de cada aresta.
Em seguida, implemente funções que atendam as seguintes especificações:
Área do triângulo.
Altura do triângulo.
Perímetro do triângulo.*/

#include <stdio.h>
#include <math.h>

typedef struct
{
    int aresta1;
    int aresta2;
    int aresta3;

} Triangulo;

float areaTriangulo(Triangulo t);
Triangulo inicializar(int ar1, int ar2, int ar3);
int perimetroTriangulo(int aresta);
float alturaTriangulo(Triangulo t);

int main()
{
    Triangulo triangulo = inicializar(2, 2, 2);

    printf("\nTriangulo equilatero com l = %d", triangulo.aresta1);
    printf("\nA area do triangulo eh: %.2f", areaTriangulo(triangulo));
    printf("\nO perimetro do triangulo eh de: %d", perimetroTriangulo(triangulo.aresta1));
    printf("\nA altura do triangulo eh de: %.2f", alturaTriangulo(triangulo));

    return 0;
}

float areaTriangulo(Triangulo t)
{
    float area = (pow(t.aresta1, 2) * (sqrt(3))) / 4;

    return area;
}

Triangulo inicializar(int ar1, int ar2, int ar3)
{

    Triangulo triangulo;

    triangulo.aresta1 = ar1;
    triangulo.aresta2 = ar2;
    triangulo.aresta3 = ar3;

    return triangulo;
}

int perimetroTriangulo(int aresta)
{

    int perimetro = aresta * 3;

    return perimetro;
}

float alturaTriangulo(Triangulo t)
{
    float altura = (t.aresta1 * sqrt(3)) / 2;

    return altura;
}