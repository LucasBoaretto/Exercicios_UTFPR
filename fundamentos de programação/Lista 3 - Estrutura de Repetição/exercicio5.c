/*Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário (validar para que n seja
diferente de 0). Se o usuário informar um número negativo transformá-lo em positivo (sem usar funções prontas)
antes de utilizar.
Por exemplo, se o usuário informar 4, o programa deverá mostrar os quatro primeiros números pares que são
divisíveis por três: 0, 6, 12 e 18.
 */

#include <stdio.h>
#include <ctype.h>

int main()
{

    char opcao;
    int num, cont, i;

    do
    {
        printf("Quantos numeros pares divisiveis por 3 quer mostrar? ");
        scanf("%d", &num);

        if (num < 0)
        {
            num = num * -1;
        }

        i = 0;
        cont = 0;
        do
        {
            if (i % 2 == 0 && i % 3 == 0)
            {
                printf("%d\t", i);
                cont++;
            }
            i++;
        } while (cont < num);

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