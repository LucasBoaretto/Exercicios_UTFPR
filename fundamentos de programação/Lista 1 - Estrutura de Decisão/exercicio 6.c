/*Ler o gênero (F ou f para feminino, M ou m para masculino. Para qualquer outro caractere informar que é
inválido e finalizar o programa). Se informado um caractere válido, ler a altura da pessoa e calcular e mostrar
o seu peso ideal, utilizando as seguintes fórmulas:
a) Para homens: (72.7 * h) - 58;
b) Para mulheres: (62.1 * h) - 44.7.*/

#include <stdio.h>

int main()
{

    char gen;
    float altura, pesoIdeal;

    printf("\nGenero(F ou M): ");
    scanf("%c", &gen);

    switch (gen)
    {
        {
        case 'M':
        case 'm':
            printf("\nAltura(m): ");
            scanf("%f", &altura);
            pesoIdeal = (72.7 * altura) - 58;
            printf("\nO seu peso ideal eh: %.2f Kg", pesoIdeal);
            break;
        case 'F':
        case 'f':
            printf("\nAltura(m): ");
            scanf("%f", &altura);
            pesoIdeal = (62.1 * altura) - 44.7;
            printf("\nO seu peso ideal eh: %.2f Kg", pesoIdeal);
            break;
        default:
            printf("\nCaractere invalido.");
            break;
        }
    }

    // com if fica assim:
    /*if (gen == 'F' || gen == 'M' || gen == 'f' || gen == 'm')
    {
        printf("\nAltura(m): ");
        scanf("%f", &altura);

        if (gen == 'M' || gen == 'm')
        {
            pesoIdeal = (72.7 * altura) - 58;
            printf("\nO seu peso ideal eh: %.2f Kg", pesoIdeal);
        }
        else
        {
            pesoIdeal = (62.1 * altura) - 44.7;
            printf("\nO seu peso ideal eh: %.2f Kg", pesoIdeal);
        }
    }
    else
    {
        printf("\nCaractere invalido.");
    }*/

    return 0;
}