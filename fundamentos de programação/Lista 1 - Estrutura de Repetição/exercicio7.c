/*Em um intervalo de 0 a 100, apresentar:
a) Os números divisíveis por 3.
b) O quadrado dos números divisíveis por 3.
c) Os números divisíveis por 5 ou por 7.
d) A raiz quadrada dos números divisíveis por 5 ou por 7.
Apresentar cada item em listagem separada. Colocar um cabeçalho antes de cada listagem de maneira a
identificar o conteúdo da mesma. Em cada listagem separar os números por uma tabulação. A raiz quadrada
pode ser obtida pela função sqrt() que está na biblioteca math.h*/

#include <stdio.h>
#include <math.h>

int main()
{

    int i, quadrado;
    float raiz;

    printf("===DIVISIVEIS POR 3===\n");
    for (i = 0; i <= 100; i++)
    {
        if ((i % 3 == 0) && (i != 0))
        {
            printf("%d\t", i);
        }
    }
    printf("\n===QUADRADO DOS DIVISIVEIS POR 3===\n");
    for (i = 0; i <= 100; i++)
    {
        if ((i % 3 == 0) && (i != 0))
        {
            quadrado = pow(i, 2);
            printf("%d\t", quadrado);
        }
    }
    printf("\n===DIVISIVEIS POR 5 OU 7===\n");
    for (i = 0; i <= 100; i++)
    {
        if ((i % 5 == 0 || i % 7 == 0) && (i != 0))
        {

            printf("%d\t", i);
        }
    }
    printf("\n===RAIZ QUADRADA DOS DIVISIVEIS POR 5 OU 7===\n");
    for (i = 0; i <= 100; i++)
    {

        if (i % 5 == 0 || i % 7 == 0)
        {
            raiz = sqrt(i);
            printf("%.2f\t", raiz);
        }
    }

    return 0;
}