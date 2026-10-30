#ifndef CLIENTE_H
#define CLIENTE_H

#include "produto.h"
#include "cesta.h"

typedef struct Cliente
{
    Cesta c;
    float valor_pago;
} Cliente;


#endif /* CLIENTE_H */