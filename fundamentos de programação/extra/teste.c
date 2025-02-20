#include <stdio.h>

float SomaSerie(float i, float j, float k)
{
    if (i > j)
        return 0;
    return i + SomaSerie(i + k, j, k);
}

void ImprimeSerie(float i, float j, float k)
{
    if (i > j)
    {
        printf("\n");
        return;
    }
    printf("%.2f ", i);
    ImprimeSerie(i + k, j, k);
}

int main()
{
    float i, j, k;
    int n;

    scanf("%f %f %f", &i, &j, &k);
    scanf("%d", &n);

    printf("%.4f\n", SomaSerie(i, j, k));
    ImprimeSerie(i, j, k);

    return 0;
}
