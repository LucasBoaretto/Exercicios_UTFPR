/*Fazer funções para:
a) Contar as palavras de uma string.
b) Mostrar o primeiro caractere de cada palavra de uma string.
c) Mostrar o último caractere de cada palavra de uma string.
Usando as funções criadas, elabore um programa que receba uma string de até 100 caracteres e forneça a
quantidade de palavras da string, mostre o primeiro caractere de cada palavra da string e mostre o último
caractere de cada palavra da string. O programa também deverá copiar a primeira palavra da string para uma
outra string e imprimi-la.
Por exemplo (os traços representam os espaços):
String informada: -Universidade---Tecnologica--Federal----do--Parana--*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char reset, string[100];

    do
    {   
        printf("Informe uma string de ate 100 caracteres: ");
        fflush(stdin);
        gets(string);

        
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