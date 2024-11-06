/*Defina uma struct para retângulo, para qual deve conter o comprimento de cada aresta. Em seguida, implemente funções que atendam as
seguintes especificações:
Inicializar a estrutura.
Imprimir o conteúdo da estrutura.
Área do retângulo.
Uma função que receba dois retângulos e retorne um terceiro com a soma das arestas.*/

#include <stdio.h>

typedef struct
{
    int aresta1;
    int aresta2;
    int aresta3;
    int aresta4;

} Retangulo;

Retangulo inicializar(int aresta1, int aresta2, int aresta3, int aresta4);
void imprimirConteudo(Retangulo r);
int calcularArea(Retangulo r);
Retangulo somaRetangulo(Retangulo r1, Retangulo r2);

int main()
{
    Retangulo retangulo1 = inicializar(3, 6, 3, 6);
    Retangulo retangulo2 = inicializar(7, 4, 7, 4);

    printf("\n---RETANGULO 1---\n");
    imprimirConteudo(retangulo1);
    printf("\nA area do retangulo 1 eh de: %d\n", calcularArea(retangulo1));

    printf("\n---RETANGULO 3---\n");
    Retangulo retangulo3 = somaRetangulo(retangulo1, retangulo2);
    imprimirConteudo(retangulo3);

    return 0;
}

void imprimirConteudo(Retangulo r)
{
    printf("\nA aresta 1 tem o comprimento de: %d\n", r.aresta1);
    printf("A aresta 2 tem o comprimento de: %d\n", r.aresta2);
    printf("A aresta 3 tem o comprimento de: %d\n", r.aresta3);
    printf("A aresta 4 tem o comprimento de: %d\n", r.aresta4);
}

int calcularArea(Retangulo r)
{
    int area = r.aresta1 * r.aresta2;

    return area;
}

Retangulo somaRetangulo(Retangulo r1, Retangulo r2)
{
    Retangulo soma;
    soma.aresta1 = r1.aresta1 + r2.aresta1;
    soma.aresta2 = r1.aresta2 + r2.aresta2;
    soma.aresta3 = r1.aresta3 + r2.aresta3;
    soma.aresta4 = r1.aresta4 + r2.aresta4;

    return soma;
}

Retangulo inicializar(int aresta1, int aresta2, int aresta3, int aresta4)
{
    Retangulo r;

    r.aresta1 = aresta1;
    r.aresta2 = aresta2;
    r.aresta3 = aresta3;
    r.aresta4 = aresta4;

    return r;
}