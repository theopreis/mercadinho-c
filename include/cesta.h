#ifndef CESTA_H
#define CESTA_H

#include "produto.h"

typedef struct Cesta {
    Produto p;
    int qtd_itens;
    float valor_total;
} Cesta;


#endif /* CESTA_H */