/*Escreva um programa que conta e exibe, separadamente, a quantidade de caracteres alfabéticos e de
dígitos numéricos existentes em um texto de até 100 caracteres fornecido pelo usuário.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i, contAlfa, contNum, tam = 100;
    char reset, texto[tam];

    do
    {
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        contAlfa = 0;
        contNum = 0;
        for (i = 0; texto[i] != '\0'; i++)
        {
            if (texto[i] != ' ')
            {
                if ((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z'))
                {
                    contAlfa++;
                }
                else if (texto[i] >= '0' && texto[i] <= '9')
                {
                    contNum++;
                }
            }
        }
        printf("\nExistem %d caracteres alfanumericos no texto.\n", contAlfa);
        printf("\nExistem %d digitos numericos no texto.\n", contNum);

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