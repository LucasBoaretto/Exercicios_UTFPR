/*Defina uma struct que defina uma matriz. A struct deve incluir uma matriz, o número de linhas e número de colunas.
Em seguida faça funções para:
Inicializar a struct.
Preencher a matriz.
Imprimir o conteúdo da matriz.
Imprimir a soma entre duas matrizes.
Imprimir a subtração entre duas matrizes
Fazer a transposta da matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10 // Define o tamanho máximo da matriz

// Definindo a struct para a matriz
typedef struct
{
    int matriz[MAX][MAX];
    int linhas;
    int colunas;
} Matriz;

// Função para inicializar a matriz
Matriz inicializarMatriz(int linhas, int colunas)
{
    Matriz m;
    m.linhas = linhas;
    m.colunas = colunas;
    return m;
}

// Função para preencher a matriz com valores aleatórios
Matriz preencherMatriz(Matriz m)
{
    srand(time(NULL)); // Inicializa a semente para números aleatórios
    for (int i = 0; i < m.linhas; i++)
    {
        for (int j = 0; j < m.colunas; j++)
        {
            m.matriz[i][j] = rand() % 10; // Preenche com valores de 0 a 9
        }
    }
    return m;
}

// Função para imprimir a matriz
void imprimirMatriz(Matriz m)
{
    for (int i = 0; i < m.linhas; i++)
    {
        for (int j = 0; j < m.colunas; j++)
        {
            printf("%d ", m.matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para somar duas matrizes
Matriz somarMatrizes(Matriz m1, Matriz m2)
{
    Matriz resultado = inicializarMatriz(m1.linhas, m1.colunas);
    if (m1.linhas == m2.linhas && m1.colunas == m2.colunas)
    {
        for (int i = 0; i < m1.linhas; i++)
        {
            for (int j = 0; j < m1.colunas; j++)
            {
                resultado.matriz[i][j] = m1.matriz[i][j] + m2.matriz[i][j];
            }
        }
    }
    else
    {
        printf("Erro: As matrizes devem ter as mesmas dimensoes para serem somadas.\n");
    }
    return resultado;
}

// Função para subtrair duas matrizes
Matriz subtrairMatrizes(Matriz m1, Matriz m2)
{
    Matriz resultado = inicializarMatriz(m1.linhas, m1.colunas);
    if (m1.linhas == m2.linhas && m1.colunas == m2.colunas)
    {
        for (int i = 0; i < m1.linhas; i++)
        {
            for (int j = 0; j < m1.colunas; j++)
            {
                resultado.matriz[i][j] = m1.matriz[i][j] - m2.matriz[i][j];
            }
        }
    }
    else
    {
        printf("Erro: As matrizes devem ter as mesmas dimensoes para serem subtraídas.\n");
    }
    return resultado;
}

// Função para calcular a transposta de uma matriz
Matriz transpostaMatriz(Matriz m)
{
    Matriz resultado = inicializarMatriz(m.colunas, m.linhas);
    for (int i = 0; i < m.linhas; i++)
    {
        for (int j = 0; j < m.colunas; j++)
        {
            resultado.matriz[j][i] = m.matriz[i][j];
        }
    }
    return resultado;
}

// Função principal
int main()
{
    Matriz m1, m2, resultado;
    int linhas, colunas;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    m1 = inicializarMatriz(linhas, colunas);
    m1 = preencherMatriz(m1);

    printf("\nMatriz 1:\n");
    imprimirMatriz(m1);

    m2 = inicializarMatriz(linhas, colunas);
    m2 = preencherMatriz(m2);

    printf("\nMatriz 2:\n");
    imprimirMatriz(m2);

    // Soma das matrizes
    resultado = somarMatrizes(m1, m2);
    printf("\nSoma das Matrizes:\n");
    imprimirMatriz(resultado);

    // Subtração das matrizes
    resultado = subtrairMatrizes(m1, m2);
    printf("\nSubtracaoo das Matrizes:\n");
    imprimirMatriz(resultado);

    // Transposta da primeira matriz
    resultado = transpostaMatriz(m1);
    printf("\nTransposta da Matriz 1:\n");
    imprimirMatriz(resultado);

    return 0;
}
