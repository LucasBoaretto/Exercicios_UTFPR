/*Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos cálculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, deverá retornar 1, pois tem apenas um
número negativo que é par.
c) A média dos valores divisíveis por 3 informados. Usar a funcão fabs() para converter os valores negativos em positivos. Validar
para não fazer divisão por zero no cálculo da média.*/

#include <stdio.h>
#include <math.h>

int main()
{

    int num, contP = 0, contN = 0, soma = 0, contDiv3 = 0;
    float media;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if (num > 0)
        {
            contP++;
        }
        if (num < 0 && num % 2 == 0)
        {
            contN++;
        }
        if (num % 3 == 0 && num != 0)
        {
            contDiv3++;
            num = fabs((float)num);
            soma = soma + num;
        }

    } while (num != 0);

    printf("\nNumeros positivos: %d\n", contP);
    printf("Numeros negativos que sao pares: %d\n", contN);

    if (contDiv3 > 0)
    {
        media = (float)soma / contDiv3;
        printf("A media dos numeros divisiveis por 3 eh: %.2f", media);
    }

    return 0;
}