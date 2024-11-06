
#include <stdio.h>
#include <ctype.h>

int main()
{

    char reset, opcao;
    int contMaiusculas, contMinusculas, i, j, contLinhas, divisores, total, soma;
    float percentual;

    do
    {
        contMaiusculas = 0;
        contMinusculas = 0;

        do
        {
            do
            {
                printf("\nInforme um caracter: ");
                fflush(stdin);
                scanf("%c", &opcao);

                if (opcao >= 'A' && opcao <= 'Z')
                {
                    contMaiusculas++;
                    opcao = (int)opcao;
                    soma = 0;
                    for (i = 2; i <= opcao; i++)
                    {
                        divisores = 0;
                        for (j = 1; j <= i; j++)
                        {
                            if (i % j == 0)
                            {
                                divisores++;
                            }
                        }
                        if (divisores == 2)
                        {
                            printf("%d\t", i);
                            soma = soma + i;
                            contLinhas++;
                            if (contLinhas == 6)
                            {
                                printf("\n");
                                contLinhas = 0;
                            }
                        }
                    }
                    printf("\nSoma dos primos: %d\n", soma);
                }
                if (opcao >= 'a' && opcao <= 'z')
                {
                    contMinusculas++;
                    opcao = (int)opcao;
                    soma = 0;
                    for (i = 2; i <= opcao; i++)
                    {
                        divisores = 0;
                        for (j = 1; j <= i; j++)
                        {
                            if (i % j == 0)
                            {
                                divisores++;
                            }
                        }
                        if (divisores == 2)
                        {
                            printf("%d\t", i);
                            soma = soma + i;
                            contLinhas++;
                            if (contLinhas == 6)
                            {
                                printf("\n");
                                contLinhas = 0;
                            }
                        }
                    }
                    printf("\nSoma dos primos: %d\n", soma);
                }
            } while ((opcao >= 'A' && opcao <= 'Z') || (opcao >= 'a' && opcao <= 'z'));

            if (opcao != (opcao >= 'A' && opcao <= 'Z') && opcao != (opcao >= 'a' && opcao <= 'z'))
            {
                printf("Caracter invalido\n");
            }
        } while (opcao != '0');

        total = contMaiusculas + contMinusculas;
        percentual = ((float)contMinusculas / total) * 100;
        printf("\nPercentual de minusculas: %.2f%%\n", percentual);

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