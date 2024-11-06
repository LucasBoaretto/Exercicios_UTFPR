/*Na biblioteca "vetores.h" criar função:
a) Com o protótipo void gerarVetorCharMinuscula(char vetor[], int tam) para
gerar caracteres alfabéticos minúsculos em um vetor. Use vetor[i] = rand() % 26 + 97;
Explicando: A função rand() % 26 gera um número aleatório entre 0 e 25, que somado com 97 equivale a um
valor entre 97 a 122, que se refere aos caracteres alfabéticos minúsculos da tabela ASCII.
b) Com o protótipo void gerarVetorCharMaiuscula(char vetor[], int tam) para
caracteres alfabéticos maiúsculos. Use vetor[i] = rand() % 26 + 65;
Explicando: A função rand() % 26 gera um número aleatório entre 0 e 25, que somado com 65 equivale a um
valor entre 65 a 90, que se refere aos caracteres alfabéticos maiúsculos da tabela ASCII.
c) Com o protótipo void mostrarVetorChar(char vetor[], int tam, int n) para
mostrar o vetor gerado em colunas com n caracteres por linha, separados por um espaço.
Usando essas funções:
a) Gerar um vetor com 100 caracteres alfabéticos minúsculos.
b) Gerar um vetor com 200 caracteres alfabéticos maiúsculos.
c) Mostrar ambos os vetores gerados em colunas com 10 caracteres por linha, sendo cada caractere deve ser
separado por um espaço.
*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "vetores.h"

int main()
{
    char reset;
    int n, tamanhoMinusculas = 100, tamanhoMaiusculas = 200;

    do
    {
        printf("Quantos caracteres deseja mostrar por linha? ");
        scanf("%d", &n);

        printf("\n=== VETOR MINUSCULAS ===\n");
        char vetMin[tamanhoMinusculas];
        gerarVetorCharMinuscula(vetMin, tamanhoMinusculas);
        mostrarVetorChar(vetMin, tamanhoMinusculas, n);

        printf("\n=== VETOR DE MAIUSCULAS ===\n");
        char vetMai[tamanhoMaiusculas];
        gerarVetorCharMaiuscula(vetMai, tamanhoMaiusculas);
        mostrarVetorChar(vetMai, tamanhoMaiusculas, n);

        do
        {
            printf("\nExecutar novamente (S ou N)?:");
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