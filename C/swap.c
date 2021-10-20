#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
    int x = 1;
    int y = 2;

    // x와 y의 값을 바꾸기
    printf("바꾸기 전\n");
    printf("x는 %d, y는 %d\n", x, y);

    // swap
    swap(&x, &y);

    // printf("%d\n", x);
    // printf("%p\n", &x);

    printf("바꾼 후\n");
    printf("x는 %d, y는 %d\n", x, y);
}


void swap(int *x, int *y)
{
    // argument (매개 인자): x, y
    int temp = *x; // 1
    *x = *y;
    *y = temp;
    printf("swap: x는 %d, y는 %d\n", *x, *y);

}