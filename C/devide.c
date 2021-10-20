#include <stdio.h>

int main(void)
{
    // int number = 657;

    // int a = number / 100; // 6
    // int mok = (number % 100) / 10; // 5
    // int namuji = number % 10; // 7
    // printf("%d\n", a + mok + namuji);


    // +=
    // *=
    // /=
    // %=


    // 10000 - 4400
    // int change = 88700;
    // int coins = 0;

    // coins += (change / 500); // coins
    // printf("500 개수: %d", coins);
    // // coins = coins + (change % 500) / 100;
    // coins += (change % 500) / 100; //
    // printf("100 개수: %d", (change % 500) / 100);

    // printf("총 개수:%d\n", coins);
    
    // int coins = get_num_coins(4600);


}


int get_num_coins(int change)
{
    int coins = 0;

    coins += (change / 500); 
    coins += (change % 500) / 100; 
    
    return coins;
}