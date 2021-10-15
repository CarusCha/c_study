#include <stdio.h>
#include <string.h>

int main(void)
{
    // int i = 0;
    // while (i < 0) // true
    // {
    //     printf("Hi\n");
    //     i++;
    // }


    // int i = 0;
    // do
    // {
    //     printf("Hi\n");
    //     i++;
    // } while (i < 0

    char *a[] = {"aaa"};
    char b = 'a';
    char *c = "aaa";


    printf("%lu\n", sizeof(a[0]));
    printf("%lu\n", sizeof(b));
    printf("%lu\n", sizeof(c));
    printf("%lu\n", sizeof("aaa"));
    printf("%lu\n", sizeof(1));

}