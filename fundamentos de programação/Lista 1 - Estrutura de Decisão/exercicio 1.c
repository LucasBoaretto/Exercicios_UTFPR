/*Elaborar um programa que leia um número que representa uma senha e verifica se a mesma está correta
ou não, comparando-a com 12345 e informa "Acesso autorizado" ou "Acesso negado", conforme o caso.
*/

#include <stdio.h>

int main()
{

    int senha;

    printf("Informe a senha de 5 digitos: ");
    scanf("%d", &senha);

    if (senha == 12345)
    {

        printf("Acesso autorizado.");
    }
    else
    {
        printf("Acesso negado.");
    }

    return 0;
}