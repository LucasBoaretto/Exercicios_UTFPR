/*Ler um texto de até 50 caracteres, copiar para um vetor somente a primeira palavra. Mostrar a string
armazenada.
Observação: Não esquecer de finalizar a string gerada (copiada).*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char reset, texto[100], copia[100];
    int i, j;

    do
    {
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        i = 0;
        j = 0;
        while (texto[i] == ' ')
        {
            i++;
        }
        while (texto[i] != ' ' && texto[i] != '\0')
        {
            copia[j] = texto[i];
            j++;
            i++;
        }
        copia[j] = '\0';
        printf("A string copiada eh: ");
        puts(copia);

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