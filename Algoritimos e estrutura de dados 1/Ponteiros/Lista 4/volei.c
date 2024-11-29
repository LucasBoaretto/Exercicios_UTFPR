/*Ponteiro em structs - Vôlei
Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe. A cada jogo, seu auxiliar anota quantas tentativas de saques, bloqueios e ataques cada um de seus jogadores fez, bem como quantos desses saques, bloqueios e ataques tiveram sucesso (resultaram em pontos). Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

O programa deve ter a seguinte struct:


typedef struct {
    char nome[255];
    int saquesTotal;
    int bloqueiosTotal;
    int ataquesTotal;
    int saquesSucesso;
    int bloqueiosSucesso;
    int ataquesSucesso;
}Jogador;
A taxa de sucesso de cada jogador deve ser calculada em porcentagem (%) para cada um individualmente.

Para isso crie uma função que recebe a struct como REFERÊNCIA e preencha as variáveis dentro dessa função.

Input Format

A entrada é dada pelo número de jogadores N, seguido pelo nome de cada um dos jogadores. Abaixo do nome de cada jogador, seguem duas linhas com três inteiros cada. Na primeira linha S, B e A representam a quantidade de tentativas de saques, bloqueios e ataques e na segunda linha, S1, B1 e A1 com o número de saques, bloqueios e ataques deste jogador que tiveram sucesso.

Constraints

.

Output Format

A saída deve conter o percentual total de saques, bloqueios e ataques do time todo que resultaram em pontos, conforme mostrado nos exemplos.

Sample Input 0

3
Renan
10 20 12
1 10 9
Jonas
8 7 1
2 7 0
Edson
3 3 3
1 2 3
Sample Output 0

Pontos de Saque: 19.05%
Pontos de Bloqueio: 63.33%
Pontos de Ataque: 75.00%
Sample Input 1

4
Blinky
10000 2500 18
1589 2499 9
Pinky
8017 7694 1111
4811 7354 12
Inky
8106 1651 1571
2101 999 358
Clyde
8735 1868 6849
1866 461 5555
Sample Output 1

Pontos de Saque: 29.74%
Pontos de Bloqueio: 82.50%
Pontos de Ataque: 62.14%*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    char nome[255];
    int saquesTotal;
    int bloqueiosTotal;
    int ataquesTotal;
    int saquesSucesso;
    int bloqueiosSucesso;
    int ataquesSucesso;
} Jogador;

void calculaEstatisticas(Jogador *jogadores, int n);

int main()
{
    int n;
    scanf("%d", &n);

    Jogador jogadores[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", jogadores[i].nome);
        scanf("%d %d %d", &jogadores[i].saquesTotal, &jogadores[i].bloqueiosTotal, &jogadores[i].ataquesTotal);
        scanf("%d %d %d", &jogadores[i].saquesSucesso, &jogadores[i].bloqueiosSucesso, &jogadores[i].ataquesSucesso);
    }

    calculaEstatisticas(jogadores, n);

    return 0;
}

void calculaEstatisticas(Jogador *jogadores, int n)
{
    int totalSaques = 0, totalBloqueios = 0, totalAtaques = 0;
    int sucessoSaques = 0, sucessoBloqueios = 0, sucessoAtaques = 0;

    for (int i = 0; i < n; i++)
    {
        totalSaques += jogadores[i].saquesTotal;
        totalBloqueios += jogadores[i].bloqueiosTotal;
        totalAtaques += jogadores[i].ataquesTotal;

        sucessoAtaques += jogadores[i].ataquesSucesso;
        sucessoSaques += jogadores[i].saquesSucesso;
        sucessoBloqueios += jogadores[i].bloqueiosSucesso;
    }

    double porcentagemSaques = (sucessoSaques * 100) / (float)totalSaques;
    double porcentagemBloqueios = (sucessoBloqueios * 100) / (float)totalBloqueios;
    double porcentagemAtaques = (sucessoAtaques * 100) / (float)totalAtaques;

    printf("Pontos de Saque: %.2f%%\n", porcentagemSaques);
    printf("Pontos de Bloqueio: %.2f%%\n", porcentagemBloqueios);
    printf("Pontos de Ataque: %.2f%%\n", porcentagemAtaques);
}
