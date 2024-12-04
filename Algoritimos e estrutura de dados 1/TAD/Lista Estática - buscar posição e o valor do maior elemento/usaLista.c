#include <stdio.h>
#include "lista.h"

int main()
{
    Lista *l1 = criar_lista();
    int val, n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        inserir(l1, val);
    }

    int maior = retornarMaior(l1, n);
    int pos = retornarPosicao(l1, n, maior);

    if (!lista_vazia(l1))
    {
        printf("%d %d", pos, maior);
    }
    else
    {
        printf("-1");
    }

    liberar_lista(l1);

    return 0;
}
