/*Implemente um programa que adivinhe o "número mágico" entre 0 e 10. O programa deverá imprimir a mensagem
"Certo! %d é o número mágico" quando o jogador acerta o número mágico, a mensagem "Errado, muito alto", caso o
jogador tenha digitado um número maior que o número mágico e a mensagem "Errado, muito baixo", caso o jogador
tenha digitado um número menor que o número mágico. O número mágico é produzido usando o gerador de números
randômicos de C (função rand(), que exige o uso da biblioteca stdlib.h).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int nMag, i, x;

    printf("Advinhe o ""numero magico entre"" 0 e 10: ");
    scanf("%d", &nMag);

    srand(time(NULL));

    for (i = 1; i <= 1; i++)
    {
        x = rand() % (10 + 1);

        //printf("\n%d", x);
    }

    if (nMag >= 0 && nMag <= 10)
    {
        if (x == nMag)
        {
            printf("\nCerto! %d eh o numero magico", nMag);
        }
        else if (x < nMag)
        {
            printf("\nErrado, muito alto");
        }
        else
        {
            printf("\nErrado, muito baixo");
        }
    }
    else
    {
        printf("\nNumero invalido");
    }
    return 0;
}