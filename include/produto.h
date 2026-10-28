#ifndef PRODUTO_H
#define PRODUTO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

typedef struct Produto {
    int codigo_de_barras;
    char nome[50];
    float preco;
    int qtd_disp;
} Produto;

Produto criaProduto(int codigo_de_barra, char nome[], float preco, int qtd_disp);

#endif /* PRODUTO_H */