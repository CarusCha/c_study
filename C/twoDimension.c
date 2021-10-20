#include <stdio.h>

int main(void)
{
    // int array[5] = {1,2,3,4,5};

    int array[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("%d ", array[r][c]);
        }

        printf("\n");
    }

    // array[0] -> {1,2,3,4,5}
}