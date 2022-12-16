// 사용자가 하루 동안 먹은 음식들을 입력받아 구조체 배열에 저장
// 하루 동안 먹은 음식의 칼로리를 계산
#include <stdio.h>

typedef struct food
{
    char name[100];
    int calories;
}FOOD;

int main()
{
    FOOD list[3] = { {"감자", 200},
                     {"고구마", 300},
                     {"라면", 400} };
    int total = 0; // 하루 동안 먹은 음식의 칼로리 저장

    // 칼로리 합산
    for (int i = 0;i < 3;i++)
        total += list[i].calories;

    // 결과 출력
    printf("총 칼로리=%d\n", total);
    return 0;
}