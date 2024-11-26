/*Defina uma struct para carro. O registro incluir modelo, fabricante, ano fabricação, ano modelo,
combustível, quilômetros rodados e preço. Em seguida faça funções para:
Iniciar um vetor com 5 carros.
Imprimir os dados de cada carro.
Calcular o preço médio dos carros usados.
Imprimir o modelo dos carros de acordo com o nome do fabricante fornecido como variável de entrada.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char modelo[15];
    char fabricante[15];
    int anoFabricacao;
    int anoModelo;
    char combustivel[15];
    float kmRodados;
    float preco;

} Carro;

void inicializar(Carro carros[5]);
void imprimirCarros(Carro carros[5]);
float precoMedio(Carro carros[5]);
void imprimirModelosPorFabricante(Carro carros[5], char fabricante[15]);

int main()
{
    Carro concessionaria[5];
    inicializar(concessionaria);

    imprimirCarros(concessionaria);

    float valorMedio = precoMedio(concessionaria);
    printf("\nO preco medio dos carros eh de: R$%.2f", valorMedio);

    char fabricante[15];
    printf("\nDigite o nome do fabricante para listar os modelos: ");
    scanf("%s", fabricante);
    imprimirModelosPorFabricante(concessionaria, fabricante);

    return 0;
}

void inicializar(Carro carros[5])
{
    strcpy(carros[0].modelo, "Civic type R");
    strcpy(carros[0].fabricante, "Honda");
    carros[0].anoFabricacao = 2000;
    carros[0].anoModelo = 1997;
    strcpy(carros[0].combustivel, "Gasolina");
    carros[0].kmRodados = 110000;
    carros[0].preco = 400000;

    strcpy(carros[1].modelo, "Corolla");
    strcpy(carros[1].fabricante, "Toyota");
    carros[1].anoFabricacao = 2017;
    carros[1].anoModelo = 2017;
    strcpy(carros[1].combustivel, "Gasolina");
    carros[1].kmRodados = 5000;
    carros[1].preco = 97000;

    strcpy(carros[2].modelo, "Ka");
    strcpy(carros[2].fabricante, "Ford");
    carros[2].anoFabricacao = 2018;
    carros[2].anoModelo = 2018;
    strcpy(carros[2].combustivel, "Gasolina");
    carros[2].kmRodados = 50000;
    carros[2].preco = 60000;

    strcpy(carros[3].modelo, "Chevette");
    strcpy(carros[3].fabricante, "Chevrolet");
    carros[3].anoFabricacao = 2000;
    carros[3].anoModelo = 1997;
    strcpy(carros[3].combustivel, "Etanol");
    carros[3].kmRodados = 200000;
    carros[3].preco = 20000;

    strcpy(carros[4].modelo, "Corsa");
    strcpy(carros[4].fabricante, "Chevrolet");
    carros[4].anoFabricacao = 2006;
    carros[4].anoModelo = 2000;
    strcpy(carros[4].combustivel, "Gasolina");
    carros[4].kmRodados = 230000;
    carros[4].preco = 8000;
}

void imprimirCarros(Carro carros[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nCarro %d\n", i + 1);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Fabricante: %s\n", carros[i].fabricante);
        printf("Ano de fabricacao: %d\n", carros[i].anoFabricacao);
        printf("Modelo ano: %d\n", carros[i].anoModelo);
        printf("Tipo de combustivel: %s\n", carros[i].combustivel);
        printf("Km rodados: %.2f\n", carros[i].kmRodados);
        printf("Preco do carro: R$ %.2f\n", carros[i].preco);
    }
}

float precoMedio(Carro carros[5])
{
    float soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += carros[i].preco;
    }
    return soma / 5;
}

void imprimirModelosPorFabricante(Carro carros[5], char fabricante[15])
{
    printf("\nModelos do fabricante %s:\n", fabricante);
    int encontrado = 0;
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(carros[i].fabricante, fabricante) == 0)
        {
            printf("- %s\n", carros[i].modelo);
            encontrado = 1;
        }
    }
    if (!encontrado)
    {
        printf("Nenhum modelo encontrado para o fabricante %s.\n", fabricante);
    }
}
