#include <stdio.h>
#include <stdlib.h>

struct Produto {
    int id;
    float preco;
};

void imprimir_produtos(struct Produto *p, int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Produto %d - Preco: %.2f\n", (p + i)->id, (p + i)->preco);
    }
}

int main() {
    int quantidade;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &quantidade);

    struct Produto *estoque = malloc(quantidade * sizeof(struct Produto));

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o id do produto %d: ", i + 1);
        scanf("%d", &(estoque + i)->id);
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &(estoque + i)->preco);
    }

    printf("\n");
    imprimir_produtos(estoque, quantidade);

    free(estoque);

    return 0;
}
