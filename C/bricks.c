#include <stdio.h>
#include <cs50.h>

int main(void)
{

    // a


    // int height = get_int("Height: ");

    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 3);

// #
// ##
// ###
// 3
    // for (int i = 0; i < height; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }


//     #
//    ##
//   ###
// 3
// i: 0 - j: 2
// i: 1 - j: 1
// i: 2 - j: 0

    // for (int i = 0; i < height; i++)
    // {
    //     for (int j = 0; j < height - i - 1; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }


//     #  #
//    ##  ##
//   ###  ###
//  ####  ####
// #####  #####


    // for (int i = 0; i < height; i++)
    // {
    //     for (int j = 0; j < height - i - 1; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("#");
    //     }

    //     printf("  ");

    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("#");
    //     }

    //     printf("\n");
    // }






}


// #
// ##
// ###
// ####
// #####
// ######
// #######




// height: 1
// #
// height: 2
//  #
// ##

// 1)
//     #
//    ##
//   ###
//  ####
// #####

// 2)
// height: 1
// #  #
// height: 2000
//  #  #
// ##  ##

//     #  #
//    ##  ##
//   ###  ###
//  ####  ####
// #####  #####

// 3)
// while
// do~while