#include "produto.h"

Produto* criaProduto(int codigo_de_barra, char nome[], float preco, int qtd_disp) {
    Produto *p = malloc(sizeof(Produto));

    p->codigo_de_barras = codigo_de_barra;
    strcpy(p->nome, nome);
    p->preco = preco;
    p->qtd_disp = qtd_disp;

    return p;
}

