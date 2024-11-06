/*Fazer uma função que recebe duas strings e retorna 1 se elas são iguais ou 0, caso sejam diferentes.
Elaborar um programa que leia uma palavra, armazene o seu inverso em outra string e determine se a
mesma representa um palíndromo ou não, usando a função que compara strings. Exemplos de palavras
palíndromos: ovo, natan, sos, arara, mirim, anilina, ana*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char verificarPalindromo(char vetA[], char vetB[]);

int main()
{
    char reset, palavra[50], inverso[50], copia[50], palindromo;
    int i, j;

    do
    {
        printf("Informe uma palavra: ");
        fflush(stdin);
        gets(palavra);

        i = 0;
        while (palavra[i] != '\0')
        {
            copia[i] = palavra[i];
            i++;
        }
        copia[i] = '\0';

        i = 0;
        while (copia[i] != '\0')
        {
            i++;
        }

        j = 0;
        for (i = i - 1; i >= 0; i--)
        {
            inverso[j] = palavra[i];
            j++;
        }
        inverso[j] = '\0';

        printf("Inverso da palavra: ");
        puts(inverso);

        palindromo = verificarPalindromo(inverso, palavra);
        if (palindromo == 1)
        {
            printf("\nEh palindromo\n");
        }
        else
        {
            printf("\nNao eh palindromo\n");
        }

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

char verificarPalindromo(char vetA[], char vetB[])
{
    int i, j = 0, palindromo;
    for (i = 0; vetB[i] != '\0'; i++)
    {
        if (vetB[j] == vetA[i])
        {
            palindromo = 1;
        }
        else
        {
            palindromo = 0;
            break;
        }
        j++;
    }
    return palindromo;
}