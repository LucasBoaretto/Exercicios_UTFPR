#include <stdio.h>
#include "lista.h"

int main()
{
    Lista *l1 = criar_lista();
    Lista *l2 = criar_lista();

    // Verificar se as listas foram criadas corretamente
    if (!l1 || !l2)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    int n, val;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        inserir_ordenado(l1, val);
    }

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        inserir_ordenado(l2, val);
    }

    Lista *l3 = intercala_ordenado(l1, l2);

    imprimir_lista(l3);

    liberar_lista(l1);
    liberar_lista(l2);
    liberar_lista(l3);

    return 0;
}