// 구조체 연습문제 10
// 직원을 나타내는 구조체 employee - 사번, 이름, 전화번호, 나이 등으로 구성
// 구조체 배열 선언, 10명의 데이터로 초기화
// 이중에서 나이가 20이상, 30이하인 직원의 이름과 나이 출력
#include <stdio.h>

typedef struct employee
{
    int empNo;         // 사번
    char empName[100]; // 이름
    char phoneNo[100]; // 전화번호
    int age;           // 나이
} EMP;

int main()
{
    EMP empArr[10] = {{1, "Kim", "1234", 22},
                      {2, "KKK", "2345", 44},
                      {3, "KDKD", "3456", 35},
                      {4, "Lee", "34156", 27},
                      {5, "Lee2", "73456", 33},
                      {6, "Hing", "53456", 56},
                      {7, "Hong", "33456", 49},
                      {8, "Gwang", "23456", 21},
                      {9, "Ko", "13456", 22},
                      {10, "KKo", "34536", 23}};
    // 출력 부분
    for (int i = 0; i < 10; i++)
    {
        if (empArr[i].age >= 20 && empArr[i].age <= 30)
            printf("이름: %s, 나이: %d\n", empArr[i].empName, empArr[i].age);
    }
    return 0;
}