#include <stdio.h>

void say(char greeting[], char name[], int repeat)
{
    for (int i = 0; i < repeat; i++)
    {
        printf("%s, %s\n", greeting, name);
    }
}