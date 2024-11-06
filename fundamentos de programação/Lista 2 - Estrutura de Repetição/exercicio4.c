/*Ler caracteres e parar quando o usuário informar o caractere '0'. Utilizando a tabela ASCII contar quantos caracteres são letras
maiúsculas, quantos são letras minúsculas e quantos caracteres não são letras. Sugestão: utilizar o código numérico para comparar
(A equivale a 65, B a 66...).*/

#include <stdio.h>

int main()
{
    char c;
    int maiusculas = 0, minusculas = 0, naoLetras = 0;

    printf("Digite caracteres e pressione '0' para parar:\n");

    do
    {
        scanf(" %c", &c);

        if (c >= 65 && c <= 90)
        {
            maiusculas++;
        }
        else if (c >= 97 && c <= 122)
        {
            minusculas++;
        }
        else if (c != '0')
        {
            naoLetras++;
        }

    } while (c != '0');

    printf("Letras maiusculas: %d\n", maiusculas);
    printf("Letras minusculas: %d\n", minusculas);
    printf("Caracteres que nao sao letras: %d\n", naoLetras);

    return 0;
}