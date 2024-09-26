#include <stdio.h>

int main()
{
    char navioUm[10] = "Navio";
    char navioDois[10] = "Submarino";
    char opcaoUm = 'x';
    char opcaoDois = 'y';

    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    printf("\n*** Jogo Batalha Naval ***\n");
    printf("\nEmbarcações disponíveis: %s e %s.\n", navioUm, navioDois);
    printf("\nNavio encontra-se nas casas %c%d, %c%d e %c%d.\n", opcaoUm, matriz[0][2], opcaoUm, matriz[0][3], opcaoUm, matriz[0][4]);
    printf("Submarino encontra-se nas casas %c%d e %c%d.\n\n", opcaoDois, matriz[2][0], opcaoDois, matriz[3][0]);

    return 0;
}