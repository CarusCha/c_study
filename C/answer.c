#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // 이름 입력받기
    printf("What's your name?: ");

    char name[10];
    fgets(name, 10, stdin);
    // get_string

    printf("Hello, %s\n", name);

    // 주석 (Remark)
    // 자료형 (Data type)

    // 정수 (interger) 1 2 3 -1 -2 -3
    // 문자 (character) 'a' 'b'
    // 실수 (double) 1.2 3.5
    // 배열 (array) {1,2,3} {'a','b','c'} {1.2, 3.5, 7.5}


    // cpu에서 한번에 처리할 수 있는 메모리 크기
    // 운영체제(os) 32bits(4 bytes) 64bits(8 bytes)
    // int number = 1;    // 4 bytes (8 bytes)
    // char value = 'a';  // 1 byte
    // double n = 1.1;    // 8 bytes

    // printf("정수: %d\n", number);
    // printf("문자: %c\n", value);
    // printf("실수: %f\n", n);

    // // 문자열(character array)
    // char name1[] = {'a', 'b', 'c'};
    // char name2[] = "abc";

    // printf("문자열1: %s\n", name1);
    // printf("문자열2: %s\n", name2);









}