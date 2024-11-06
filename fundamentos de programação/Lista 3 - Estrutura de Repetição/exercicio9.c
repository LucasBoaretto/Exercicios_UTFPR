/*Construa um programa que leia um conjunto de dados contendo altura (que deve ser maior que 0) e sexo
(que deve ser masculino ou feminino) de um grupo de pessoas. Quando fornecida uma altura igual a 0, é
encerrada a entrada de dados. O programa deve calcular e fornecer:
5
a) A maior e a menor altura do grupo.
b) A média de altura das mulheres.
c) A média de altura dos homens.
d) O número de homens e o percentual que eles representam no grupo.
e) O número de mulheres e o percentual que elas representam no grupo.*/

#include <stdio.h>
#include <ctype.h>

int main()
{

    float altura, maior, menor, mediaAltF, mediaAltM, somaAltF, somaAltM, somaTot, percF, percM;
    char sexo, opcao;
    int trava, contF, contM;

    do
    {
        contF = 0;
        contM = 0;
        do
        {
            do
            {
                printf("\nInforme a altura: ");
                scanf("%f", &altura);

                if (altura < 0)
                {
                    printf("Valor invalido!\n");
                }

            } while (altura < 0);

            if (altura > 0)
            {
                do
                {
                    printf("Informe o sexo: ");
                    fflush(stdin);
                    scanf("%c", &sexo);
                    sexo = toupper(sexo);

                    if (sexo != 'M' && sexo != 'F')
                    {
                        printf("Caracter invalido!\n");
                    }

                    switch (sexo)
                    {
                    case 'F':
                        contF++;
                        somaAltF = somaAltF + altura;
                        break;

                    case 'M':
                        contM++;
                        somaAltM = somaAltM + altura;
                        break;
                    }

                } while (sexo != 'M' && sexo != 'F');
            }

        } while (altura != 0);

        trava = 0;
        if (trava == 0)
        {
            maior = altura;
            menor = altura;
            trava = 1;
        }
        if (maior > altura)
        {
            maior = altura;
        }
        else if (menor < altura)
        {
            menor = altura;
        }
        printf("\nA maior altura do grupo eh: %.2f\n", maior);
        printf("A menor altura do grupo eh: %.2f\n", menor);

        somaTot = contF + contM;

        printf("\n==== MULHERES ====\n");
        printf("Quantidade: %d\n", contF);
        if (contF > 0)
        {
            mediaAltF = somaAltF / contF;
            printf("Media de altura: %.2f\n", mediaAltF);
        }
        percF = (contF / somaTot) * 100;
        printf("Percentual: %.2f\n", percF);

        printf("\n==== HOMENS ====\n");
        printf("Quantidade: %d\n", contM);
        if (contM > 0)
        {
            mediaAltM = somaAltM / contM;
            printf("Media de altura: %.2f\n", mediaAltM);
        }
        percM = (contM / somaTot) * 100;
        printf("Percentual: %.2f\n", percM);

        do
        {
            printf("\nDeseja digitar outro numero (S/N): ");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = toupper(opcao);

            if (opcao != 'S' && opcao != 'N')
            {
                printf("Opcao invalida!\n");
            }
        } while (opcao != 'S' && opcao != 'N');
    } while (opcao == 'S');

    return 0;
}