/* Ler três valores inteiros diferentes e colocá-los em ordem crescente. Os valores devem ser apresentados
com uma instrução:
printf("Menor: %d Meio: %d Maior: %d\n", menor, meio, maior);
Sugestão: Dividir o problema em partes: encontrar o maior, o menor e o do meio separadamente. Armazenar
os valores em variável e mostrá-los com uma única instrução*/

#include <stdio.h>

int main()
{

    int valor1, valor2, valor3, maior, menor, meio;

    printf("Informe o primeiro numero: ");
    scanf("%d", &valor1);
    printf("Informe o segundo numero: ");
    scanf("%d", &valor2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &valor3);

    if (valor1 > valor2 && valor1 > valor3)
    {
        maior = valor1;
    }
    else if (valor1 < valor2 && valor1 < valor3)
    {
        menor = valor1;
    }
    else
    {
        meio = valor1;
    }
    if (valor2 > valor1 && valor2 > valor3)
    {
        maior = valor2;
    }
    else if (valor2 < valor1 && valor2 < valor3)
    {
        menor = valor2;
    }
    else
    {
        meio = valor2;
    }
    if (valor3 > valor1 && valor3 > valor2)
    {
        maior = valor3;
    }
    else if (valor3 < valor1 && valor3 < valor2)
    {
        menor = valor3;
    }
    else
    {
        meio = valor3;
    }

    printf("Menor: %d Meio: %d Maior: %d\n", menor, meio, maior);

    return 0;
}