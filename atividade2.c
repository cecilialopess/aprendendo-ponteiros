#include <stdio.h>

void aplicar_desconto(float *preco, float desconto) {
    *preco = *preco - (*preco * (desconto / 100));
}

int main() {
    float preco = 100.0;

    aplicar_desconto(&preco, 10);

    printf("Preco com desconto: %.2f\n", preco);

    return 0;
}
