#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void inicializarTabuleiro(int tabuleiro[LINHAS][COLUNAS])
{
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
}

void exibirTabuleiro(int tabuleiro[LINHAS][COLUNAS])
{
    printf("\nTabuleiro:\n\n");
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavioVertical(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[x + i][y] = 1;
    }
}
void posicionarNavioHorizontal(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[x][y + i] = 2;
    }
}
void posicionarNavioDiagonal(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[x + i][y + i] = 3;
    }
}
void posicionarNavioDiagonal2(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tabuleiro[x + i][y + i] = 4;
    }
}

int main()
{
    int tabuleiro[LINHAS][COLUNAS];

    inicializarTabuleiro(tabuleiro);
    posicionarNavioVertical(tabuleiro, 2, 6, 3); // Primeiro número indica linha, segundo número indica coluna e o terceiro número indica quantas partes o navio tem.
    posicionarNavioHorizontal(tabuleiro, 5, 1, 3);
    posicionarNavioDiagonal(tabuleiro, 0, 0, 3);
    posicionarNavioDiagonal2(tabuleiro, 7, 5, 3);
    exibirTabuleiro(tabuleiro);
    printf("\n");

    return 0;
}
