# mercadinho-c
Banco de dados e funcionamento de um mercado
Data de início de projeto: 23/10/2026

## 📁 Estrutura do Projeto

```text
mercadinho-c/
├── include/           # Cabeçalhos (.h) com definições de tipos e funções
│   ├── produto.h      # Struct Produto
│   ├── cesta.h        # Struct Cesta (Produto e ponteiro de quantidade)
│   ├── caixa.h        # Funções de custo, troco e fechamento
│   ├── cliente.h      # Cadastro de clientes e caderneta de fiado
│   ├── persistencia.h # Leitura e escrita de estoque em arquivos
│   └── interface.h    # Menus de console e impressão formatada
├── src/               # Código-fonte das implementações (.c)
│   ├── main.c         # Ponto de entrada e fluxo principal
│   ├── produto.c
│   ├── cesta.c
│   ├── caixa.c
│   ├── cliente.c
│   ├── persistencia.c
│   └── interface.c
├── data/              # Arquivos de persistência de dados
│   ├── estoque.csv    # Catálogo de produtos e preços
│   └── vendas.log     # Histórico de transações
├── docs/              # Documentação e regras de negócio
│   └── arquitetura.md
├── .gitignore
├── Makefile
└── README.md
```
