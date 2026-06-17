#include <stdio.h>

struct Produto {
    int id;
    float preco;
};

void aplicar_desconto(struct Produto *p, float desconto) {
    p->preco = p->preco - (p->preco * (desconto / 100));
}

int main() {
    struct Produto produto;
    produto.id = 1;
    produto.preco = 100.0;

    aplicar_desconto(&produto, 10);

    printf("Produto %d - Preco: %.2f\n", produto.id, produto.preco);

    return 0;
}
