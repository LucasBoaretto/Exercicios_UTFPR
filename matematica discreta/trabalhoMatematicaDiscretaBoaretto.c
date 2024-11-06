#include <stdio.h>
#include <ctype.h>

void imprimirMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]);
void multiplicarMatrizes(int n, int A[n][n], int B[n][n], int resultado[n][n]);

int main()
{
    int tam;
    char opcao;
    do
    {
        do
        {
            printf("Insira o tamanho da matriz quadrada [n x n] entre 3 e 5:\nn: ");
            scanf("%d", &tam);
            if (tam < 3 || tam > 5)
            {
                printf("Valor inválido!\n");
            }
        } while (tam < 3 || tam > 5);

        int matriz[tam][tam], matrizAux[tam][tam];

        printf("\nInsira os valores, 0 ou 1 da matriz (por linha):\n");
        for (int i = 0; i < tam; i++)
        {
            printf("Insira os valores da linha %d (separados por espaco):\n", i + 1);
            for (int j = 0; j < tam; j++)
            {
                scanf("%d", &matriz[i][j]);
                matrizAux[i][j] = matriz[i][j];
            }
        }

        printf("\nMatriz A:\n");
        imprimirMatrizInteiro(tam, tam, matriz);

        printf("\nMatriz An\n");
        int cont = 1;
        int todosUm;
        do
        {
            cont++;
            multiplicarMatrizes(tam, matriz, matrizAux, matriz);

            todosUm = 1;
            for (int i = 0; i < tam; i++)
            {
                for (int j = 0; j < tam; j++)
                {
                    if (matriz[i][j] == 0)
                    {
                        todosUm = 0;
                        break;
                    }
                }
                if (!todosUm)
                    break;
            }
        } while (!todosUm);

        printf("\nMatriz An, n = %d para todos os inteiros positivos com n >= %d:\n", cont, cont);
        imprimirMatrizInteiro(tam, tam, matriz);

        do
        {
            printf("\nDeseja executar o programa novamente? (s/n):");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = toupper(opcao);

            if (opcao != 'S' && opcao != 'N')
            {
                printf("Opcao invalida!\n");
            }

        } while (opcao != 'S' && opcao != 'N');
    } while (opcao == 'S');

    return 0;
}

void imprimirMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrizes(int n, int A[n][n], int B[n][n], int resultado[n][n])
{
    int temp[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                temp[i][j] |= (A[i][k] && B[k][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            resultado[i][j] = temp[i][j];
        }
    }
}