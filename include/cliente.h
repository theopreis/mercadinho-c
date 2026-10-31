#ifndef CLIENTE_H
#define CLIENTE_H

#include "produto.h"
#include "cesta.h"

typedef struct Cliente {
    int cpf[11];
    char nome[30];
    float pontos;
    Cesta c;
} Cliente;


#endif /* CLIENTE_H */