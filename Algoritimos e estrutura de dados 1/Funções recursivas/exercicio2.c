#include <stdio.h>
#include <stdlib.h>

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
        return;
    }
    printf("%.2f ", i);
    ImprimeSerie(i + k, j, k);
}

float SerieS(int s)
{
    if (s == 1)
    {
        return 2.0;
    }
    return ((1.0 + s * s) / s) + SerieS(s - 1);
}

int main()
{
    float i, j, k, S;

    scanf("%f %f %f", &i, &j, &k);
    scanf("%f", &S);

    printf("%.2f\n", SomaSerie(i, j, k));
    ImprimeSerie(i, j, k);
    printf("\n%.6f", SerieS(S));

    return 0;
}