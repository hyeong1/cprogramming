// 구조체 포인터
// 간접 멤버 연산자(->) 사용하기
#include <stdio.h>

typedef struct student
{
    int no;
    char name[10];
    double grade;
} STUDENT;

int main()
{
    STUDENT s = {24, "kim", 4.3};
    STUDENT *ps;
    ps = &s;

    // printf("학번 %d\n이름 %s\n학점 %lf\n", (*ps).no, (*ps).name, (*ps).grade);
    printf("학번 %d\n이름 %s\n학점 %lf\n", ps->no, ps->name, ps->grade);

    return 0;
}