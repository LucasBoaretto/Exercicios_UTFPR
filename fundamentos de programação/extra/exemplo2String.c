#include <stdio.h>
#include <string.h>

// o que esta comentado é porque são outras soluções

int main()
{

    // char texto[20] = {'t', 'e', 's', 't', 'e', '\0'};
    // char vogais[11] = "aeiouAEIOU";
    char texto[100] = "Algoritimos e Programacao";
    int i; // contVogais = 0, j;
    // int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;
    int vetorVogais[5];

    puts(texto);

    /*while (texto[i] != '\0')
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            contVogais++;
        }
        i++;
    }*/

    /*printf("------Quantidade de vogais da string------\n");
    for (i = 0; texto[i] != '\0'; i++)
    {
        for (j = 0; vogais[j] != '\0'; j++)
        {
            if (vogais[j] == texto[i])
            {
                contVogais++;
            }
        }
    }*/

    // printf("%d\n", contVogais);

    for (i = 0; i < 5; i++)
    {
        vetorVogais[i] = 0;
    }

    printf("------Quantidade de cada vogal da string------\n");
    for (i = 0; texto[i] != '\0'; i++)
    {
        switch (texto[i])
        {
        case 'a':
        case 'A':
            // contA++;
            vetorVogais[0]++;
            break;
        case 'e':
        case 'E':
            // contE++;
            vetorVogais[1]++;
            break;
        case 'i':
        case 'I':
            // contI++;
            vetorVogais[2]++;
            break;
        case 'o':
        case 'O':
            // contO++;
            vetorVogais[3]++;
            break;
        case 'u':
        case 'U':
            // contU++;
            vetorVogais[4]++;
            break;
        }
    }
    printf("Quantidade de vogais 'a': %d\n", vetorVogais[0]);
    printf("Quantidade de vogais 'e': %d\n", vetorVogais[1]);
    printf("Quantidade de vogais 'i': %d\n", vetorVogais[2]);
    printf("Quantidade de vogais 'o': %d\n", vetorVogais[3]);
    printf("Quantidade de vogais 'u': %d\n", vetorVogais[4]);

    return 0;
}