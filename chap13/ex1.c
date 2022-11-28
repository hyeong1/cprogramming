// 1. (과목명, 점수)의 구조체로 된 요소를 3개 갖는 배열 선언
// 2. 3개의 요소에 대한 값(과목명과 점수)를 각각 입력받아서 배열에 저장
// 3. 저장된 과목의이름과 총점을 출력
#include <stdio.h>

typedef struct info
{
    char subject[20]; // 과목명
    int score; // 점수
} INFO;

INFO InputInfo(INFO* list); // 과목명과 점수를 입력받을 함수

int main()
{
    INFO list[3];
    int total = 0; // 점수 총합을 저장할 변수

    InputInfo(list);
    for (int i = 0;i < 3;i++)
    {
        total += list[i].score;
        printf("%s ", list[i].subject);
    }
    printf("\n");
    printf("총점: %d\n", total);

    return 0;
}

INFO InputInfo(INFO* list)
{
    for (int i = 0;i < 3;i++)
    {
        printf("과목명: ");
        scanf("%s", list[i].subject);
        printf("점수: ");
        scanf("%d", &list[i].score);
    }
}