/*Ler um texto com até 100 caracteres. Se o primeiro caractere for 'a' imprimir esse texto, caso
contrário contar quantos caracteres 'o' o texto possui.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "string.h"

int main()
{

    char reset, texto[100], contLetra, letra = 'o';

    do
    {
        printf("Informe um texto com ate 100 caracteres: ");
        fflush(stdin);
        gets(texto);

        contLetra = contarLetraRepetida(texto, letra);
        printf("\nO texto \"%s\" possui %d caracteres 'o'", texto, contLetra);

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