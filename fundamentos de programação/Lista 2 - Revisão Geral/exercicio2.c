/*Ler uma string e copiar o valor decimal do código ASCII de cada elemento da string para um vetor. Mostrar
o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Percorrer o vetor ordenado contando, sem repetição, os
números pares e os números ímpares e mostrar a soma total desses valores. Criar um vetor chamado vPares
e um vetor chamado vImpares e copiar, sem repetição, os elementos pares e ímpares para os respectivos
vetores. Mostrar os dois vetores. Criar uma matriz chamada mPares e uma matriz chamada mImpares, sendo
que mPares deverá conter na primeira coluna todos os elementos pares do vetor e na segunda coluna a
quantidade de ocorrências de cada elemento par no vetor e na matriz mImpares fazer o mesmo com os
elementos ímpares. Mostrar as duas matrizes*/

#include "bibliotecas.h"

int main()
{

    char reset, string[100], tamVet;
    int i, contPar, contImpar, j, k;

    do
    {
        printf("\nInforme uma string: ");
        fflush(stdin);
        gets(string);
        tamVet = contarCaracteresSemEspaco(string);
        int vet[tamVet];
        stringParaInt(string, vet);

        printf("\n==== VETOR ====\n");
        mostrarVetorInteiros(vet, tamVet);
        printf("\n==== VETOR ORDENADO ====\n");
        ordenarVetorInteiro(vet, tamVet);
        mostrarVetorInteiros(vet, tamVet);

        int vetPares[tamVet], vetImpares[tamVet];
        contPar = 0;
        contImpar = 0;
        j = 0;
        k = 0;
        for (i = 0; i < tamVet; i++)
        {
            if (vet[i] % 2 == 0)
            {
                if (i == 0 || vet[i] != vet[i - 1])
                {
                    vetPares[j] = vet[i];
                    j++;
                    contPar++;
                }
            }
            else
            {
                if (i == 0 || vet[i] != vet[i - 1])
                {
                    vetImpares[k] = vet[i];
                    k++;
                    contImpar++;
                }
            }
        }

        printf("\n\nNumero de pares (sem repeticao): %d", contPar);
        printf("\nNumero de impares (sem repeticao): %d\n", contImpar);

        printf("\n");
        mostrarVetorInteiros(vetPares, j);
        printf("\n");
        mostrarVetorInteiros(vetImpares, k);

        do
        {
            printf("\n\nExecutar novamente (S ou N)?:");
            fflush(stdin);
            scanf("%c", &reset);
            reset = toupper(reset);

            if (reset != 'S' && reset != 'N')
            {
                printf("Opcao invalida!\n");
            }
        } while (reset != 'S' && reset != 'N');
    } while (reset == 'S');

    return 0;
}