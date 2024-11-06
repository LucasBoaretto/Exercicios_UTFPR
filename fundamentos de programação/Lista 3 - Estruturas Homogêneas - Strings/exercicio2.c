/* Elaborar um programa que aceita e valida uma senha com 6 dígitos numéricos, que deve ser
armazenada em uma string. O usuário tem três tentativas para acertar a senha, se ultrapassar
esse limite, ele deve ser informado. O usuário também deve ser informado se ele acertou a senha
em até três tentativas.
Dica: Considere que já existe uma senha armazenada na string*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "string.h"

int main()
{

    char reset, senha[10], tentativas;
    char senhaArmazenada[7] = "123456";

    do
    {
        tentativas = 0;
        do
        {
            printf("Informe a senha: ");
            fflush(stdin);
            gets(senha);
            tentativas++;
            if (tentativas == 3)
            {
                printf("Acesso negado!");
            }

        } while (senha != senhaArmazenada && tentativas != 3);

        if (senha == senhaArmazenada)
        {
            printf("\nSenha valida!");
        }

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