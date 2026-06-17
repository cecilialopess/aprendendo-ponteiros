#include <stdio.h>

struct Produto {
    int id;
    float preco;
};

void aplicar_desconto(struct Produto *p, float desconto) {
    p->preco = p->preco - (p->preco * (desconto / 100));
}

void imprimir_produtos(struct Produto *p, int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Produto %d - Preco: %.2f\n", (p + i)->id, (p + i)->preco);
    }
}

int main() {
    struct Produto estoque[3];

    estoque[0].id = 1;
    estoque[0].preco = 50.0;

    estoque[1].id = 2;
    estoque[1].preco = 80.0;

    estoque[2].id = 3;
    estoque[2].preco = 120.0;

    imprimir_produtos(estoque, 3);

    return 0;
}
