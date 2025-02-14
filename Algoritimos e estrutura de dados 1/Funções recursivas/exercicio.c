#include <stdio.h>
#include <stdlib.h>

int resDiv(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return resDiv(a - b, b);
}

int main()
{
    int x;
    scanf("%d", &x);
    int a[x], b[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d\n", resDiv(a[i], b[i]));
    }

    return 0;
}