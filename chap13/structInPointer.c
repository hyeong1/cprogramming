// 구조체 안에 포인터 변수 포함
#include <stdio.h>

typedef struct date
{
    int month;
    int day;
    int year;
} DATE;

typedef struct student
{
    int number;
    char name[20];
    double grade;
    DATE *dob; // date 구조체에 대한 포인터 변수를 멤버로 포함
}STUDENT;

int main()
{
    DATE d = {3, 20, 1990};
    STUDENT s = {2033041, "LEE", 4.3};
    s.dob = &d; // 구조체 변수s의 멤버 dob에 구조체 d의 주소 대입

    // 출력
    printf("생년월일: %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);

    return 0;
}