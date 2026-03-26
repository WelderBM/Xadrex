#include <stdio.h>

int main() {
    // movimento do cavalo
    // movimento = printf(acima) LOOP X 2
    // segundomMovimento = printf(direita)
    for (int i = 0; i < 2; i++) {
        printf("acima\n");
    }
    printf("direita\n");

    //movimento do bispo
    // movimento = printf(acima)
    // segundomMovimento = printf(direita)
    printf("acima\n");
    printf("direita\n");

    //movimento da torre
    // movimento = printf(acima) LOOP X 2
    for (int i = 0; i < 2; i++) {
        printf("acima\n");
    }

    //movimento da rainha
    // todos os movimentos: cavalo, bispo e torre


    return 0;
}