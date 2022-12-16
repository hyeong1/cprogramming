// 성적우수자 찾기
// 학생 정보 구조체 배열 생성해서 초기화한 후 가장 성적이 좋은 학생의 이름, 학번, 평점을 화면에 출력
#include <stdio.h>

typedef struct student
{
    int number;
    char name[20];
    double grade;
} STUDENT;

int main()
{
    STUDENT list[] = { {20, "김철수", 4.2},
                        {21, "홍길동", 3.9},
                        {21, "홍길동", 3.9}};

    int bestGrade = 0; // 성적이 제일 높은 학생의 인덱스를 저장할 변수
    // 가장 높은 성적 찾기
    for (int i = 1;i < 3;i++)
    {
        if (list[bestGrade].grade < list[i].grade)
            bestGrade = i;
    }

    // 결과 출력
    printf("평점이 가장 높은 학생은 (이름: %s, 학번: %d, 평점: %lf)입니다.\n", list[bestGrade].name, list[bestGrade].number, list[bestGrade].grade);
    return 0;
}