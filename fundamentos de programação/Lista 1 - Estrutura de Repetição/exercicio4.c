/*Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma
empresa. Considerando que para cada candidato, a empresa tenha obtido as seguintes informações:
- Idade
- Nacionalidade (B - Brasileiro ou E - Estrangeiro)
- Possui curso superior (S - Sim ou N - Não)
Determinar:
a) A quantidade de brasileiros.
b) A quantidade de estrangeiros.
c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo, igual a 0 ou idade
negativa. Se a idade for igual a 0 ou negativa, não ler as informações de nacionalidade e se possui curso
superior, e sair do programa.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    int idade, contB = 0, contE = 0, contBSC = 0, trava = 0, menor, somaIdade = 0;
    char nacio, cursoS;
    float media;

    do
    {
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if (idade > 0)
        {

            do
            {
                printf("Informe a nacionalidade (B - Brasileiro ou E - Estrangeiro): ");
                fflush(stdin);
                scanf("%c", &nacio);
                nacio = toupper(nacio);

                if (nacio != 'B' && nacio != 'E')
                {
                    printf("Caracter invalido!\n");
                }

            } while (nacio != 'B' && nacio != 'E');

            do
            {
                printf("Possui curso superior (S - Sim ou N - Nao): ");
                fflush(stdin);
                scanf("%c", &cursoS);
                cursoS = toupper(cursoS);

                if (cursoS != 'S' && cursoS != 'N')
                {
                    printf("Caracter invalido!\n");
                }

            } while (cursoS != 'S' && cursoS != 'N');

            switch (nacio)
            {
            case 'B':
                contB++;
                if (cursoS == 'N')
                {
                    somaIdade = somaIdade + idade;
                    contBSC++;
                }
                break;

            default:
                contE++;
                if (trava == 0 && cursoS == 'S')
                {
                    menor = idade;
                    trava = 1;
                }
                break;
            }

            if (nacio == 'E' && cursoS == 'S')
            {
                if (idade < menor)
                {
                    menor = idade;
                }
            }
        }
    }

    while (idade > 0);

    printf("Quantidade de brasileiros: %d\n", contB);
    printf("Quantidade de estrangeiros: %d\n", contE);
    if (contBSC > 0)
    {
        media = (float)somaIdade / contBSC;
        printf("A idade media dos brasileiros sem curso superior eh: %.1f\n", media);
    }
    printf("A menor idade de estrangeiros com curso superior eh: %d", menor);

    return 0;
}