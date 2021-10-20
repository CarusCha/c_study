#include <stdio.h>

typedef struct
{
    char *name; // 이름
    int num; // 학번
    double grade; // 학점
}
STUDENT;



int main(void)
{
    // int x = 1;

    // STUDENT student1 = {"Jack", 1, 4.0};
    // STUDENT student2 = {"Linda", 2, 3.0};

    // printf("이름: %s, 학번: %d, 학점: %f\n", student1.name, student1.num, student1.grade);
    // printf("이름: %s, 학번: %d, 학점: %f\n", student2.name, student2.num, student2.grade);

    STUDENT student_array[20] = {
        {"Jack", 1, 4.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
        {"Linda", 2, 3.0},
    };

    student_array[0].name = "James";


    for (int i = 0; i < 20; i++)
    {
        printf("이름: %s, 학번: %d, 학점: %f\n", student_array[i].name, student_array[i].num, student_array[i].grade);
    }




}