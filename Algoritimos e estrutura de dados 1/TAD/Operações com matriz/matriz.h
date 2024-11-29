/* Matriz.h */
/**
 * A diretiva de compilação abaixo inclui apenas uma vez o arquivo
 * de cabeçalho. Ou seja, o código entre as duas diretivas
 * '#ifndef ...  #endif' só será compilado se o símbolo 'MATRIZ_H'
 * não tiver sido definido.
 */
#ifndef MATRIZ_H /*inicio da estrutura condicional*/
#define MATRIZ_H /*define o nome_do_simbolo */
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <math.h>

typedef struct matriz Matriz;

Matriz *iniciar(int l, int c);

// A matriz recebe x na posição [i][j]
void alterar(Matriz *m, int x, int i, int j);

// Retorna a linha da matriz na posição i
int *obter_linha(Matriz *m, int i);

// Retorna a coluna da matriz na posição i
int *obter_coluna(Matriz *m, int i);

// obter sub-matriz
Matriz *obter_submat(Matriz *m, int li, int ci, int lf, int cf);

#endif /*fim da estrutura condicional*/