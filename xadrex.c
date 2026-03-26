#include <stdio.h>

// Implemente funções recursivas para simular o movimento de cada peça, substituindo os loops originais

// Função recursiva para o movimento do cavalo (DEVE SER EM L)

// Função recursiva para o movimento do bispo
void movimentoCima(int movimentos)
{
    if (movimentos > 0)
    {
        printf("acima\n");
        movimentoCima(movimentos - 1);
    }
}
void movimentoDireita(int movimentos)
{
    if (movimentos > 0)
    {
        printf("direita\n");
        movimentoDireita(movimentos - 1);
    }
}

void movimentoCavalo()
{
    movimentoCima(2);
    movimentoDireita(1);
}

void movimentoBispo(int movimentos)
{
    if (movimentos > 0)
    {
        movimentoCima(1);
        movimentoDireita(1);
        movimentoBispo(movimentos - 1);
    }
}

void movimentoTorre(int movimentos)
{
    if (movimentos > 0)
    {
        movimentoCima(1);
        movimentoTorre(movimentos - 1);
    }
}

int main()
{
    // entrada de dados
    printf("Movimento do cavalo:\n");
    movimentoCavalo();
    printf("Movimento do bispo:\n");
    movimentoBispo(5);
    printf("Movimento da torre:\n");
    movimentoTorre(7);

    return 0;
}