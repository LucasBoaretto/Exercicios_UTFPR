/* A função toupper() transforma um caractere para maiúsculo. Para usar esta função é necessário incluir no cabeçalho
a biblioteca ctype.h. Veja o exemplo a seguir:*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    char ch;

    printf("\nInforme um caractere: ");
    scanf("%c", &ch);

    ch = toupper(ch);

    printf("\nMaiusculo: %c", ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\nO caracter digitado pertence ao albafeto\n");

        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\nVOGAL %c", ch);
            break;

        default:
            printf("\nCONSOANTE %c", ch);
            break;
        }
    }
    else
    {
        printf("\nO caracter digitado nao pertence ao albafeto");
    }

    return 0;
}