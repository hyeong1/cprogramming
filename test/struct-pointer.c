// 학생 수 입력받고, 학생 수 만큼 동적 할당
// 전체 학생 정보 출력 후 성적이 가장 높은 학생 정보 출력
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int number;
    char name[20];
    double grade;
};

int main()
{
    struct student *list;
    int size;
    int best; // 학점이 가장 높은 학생 찾을 때 사용할 변수
    printf("학생 수: ");
    scanf("%d", &size);
    list = (struct student*)malloc(size * sizeof(struct student));

    // 정보 입력
    for (int i = 0;i < size;i++)
    {
        printf("학번을 입력하시오: ");
        scanf("%d", &list[i].number);
        printf("이름을 입력하시오: ");
        scanf("%s", list[i].name);
        printf("학점을 입력하시오(실수): ");
        scanf("%lf", &list[i].grade);
    }
    // 전체 정보 출력
    for (int i = 0;i < size;i++)
        printf("학번: %d, 이름: %s,학점: %lf\n", list[i].number, list[i].name, list[i].grade);

    // 학점이 가장 높은 학생의 정보 출력
    best = 0;  
    for (int i = 1;i < size;i++)
        if (list[best].grade < list[i].grade)
            best = i; // 학점이 가장 높은 학생의 인덱스를 저장
    printf("학점이 가장 높은 학생은 (학번: %d, 이름: %s, 평점: %lf)입니다.\n", list[best].number, list[best].name, list[best].grade);

    return 0;
}