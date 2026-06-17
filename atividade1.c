#include <stdio.h>

int main() {
    float preco = 100.0;
    float *ptr = &preco;

    *ptr = *ptr + (*ptr * 0.10);

    printf("Preco original: %.2f\n", preco);

    return 0;
}
