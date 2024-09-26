#include <stdio.h>

int main()
{

    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
        };

    printf("\n*** Jogo Batalha Naval ***\n");
    printf("\nEmbarcações disponíveis: Navio, Submarino.\n");
    printf("\nNavio encontra-se nas casas x%d, x%d e x%d.\n", matriz[0][2], matriz[0][3], matriz[0][4]);
    printf("Submarino encontra-se nas casas y%d e y%d.\n\n", matriz[2][0], matriz[3][0]);

    return 0;
}