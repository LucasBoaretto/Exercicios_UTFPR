/*Apresente os pares entre 0 e 100, sem utilizar if dentro do for. Também calcule e forneça a
média dos pares.*/

#include <stdio.h>

int main()
{
  int i, soma = 0, media, cont = 0;

  for (i = 0; i <= 100; i = i + 2)
  {
    cont++;
    soma = soma + i;
    media = (soma / cont);
  }
  printf("media: %d\n", media);

  return 0;
}
