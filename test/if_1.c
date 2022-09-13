// 시험 점수 90~100 A, 80~89 B, 70~79 C, 60~69 D, 나머지 F 출력
// 점수는 0 보다 크거나 같고, 100 보다 작거나 같은 정수
#include <stdio.h>

int main()
{
    int score;
    printf("점수: ");
    scanf("%d", &score);

    if (score > 89)
        printf("A\n");
    else if (score > 79)
        printf("B\n");
    else if (score > 69)
        printf("C\n");
    else if (score > 59) 
        printf("D\n");
    else 
        printf("F\n");

    return 0;
}