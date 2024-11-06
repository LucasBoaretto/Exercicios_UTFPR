int calculaFatorial(int x)
{
    int fat = 1, i;

    for (i = x; i >= 2; i--)
    {
        fat = fat * i;
    }

    return fat;
}

void mostraFatorial(int x, int fat)
{
    int i;

    printf("%d! = ", x);

    for (i = x; i >= 2; i--)
    {
        printf("%d * ", i);
    }

    printf("1 = %d\n", fat);
}