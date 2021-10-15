#include <stdio.h>
#include <cs50.h>

int main(void)
{

    // 논리연산자
    // == 같을때
    // != 같지 않을때
    // && and
    // || or
    // >   3 > 2
    // >=   => 2 >= 2
    // <
    // <=

    int i = get_int("Enter int: ");
    if (i == 0)
    {
        printf("같다\n");
    }
    else if (i == 1)
    {
        printf("y\n");
    }
    else
    {
        printf("같지않다\n");
    }
}