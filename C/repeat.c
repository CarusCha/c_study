#include <stdio.h>

int main(void)
{
    char *nameArray[] = {"jack", "linda", "jason"};

    int i = 0;
    while (i < 3)
    {
        printf("Hi, %s\n", nameArray[i]);
        i++;
    }

    for (int j = 0; j < 3; j++)
    {
        printf("Hi, %s\n", nameArray[j]);
    }

}