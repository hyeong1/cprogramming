// 구조체 연습문제 9
// 각각의 음식에 대해 음식의 이름, 칼로리 저옵를 구조체로 표현
// 사용자가 하루 동안 먹은 음식들을 입력받아 구조체 배열에 저장
// 하루 동안 먹은 음식의 칼로리를 계산
#include <stdio.h>

typedef struct food
{
    char name[100]; // 음식의 이름
    int calories; // 해당 음식의 칼로리
}FOOD;

int main()
{
    FOOD dayEaten[3]; // 하루 동안 먹음 음식을 입력받을 구조체 배열
    int totalCalories = 0; // 총 칼로리 합 변수
    // 사용자 입력 부분
    printf("하루 동안 먹은 음식을 입력하세요.\n");
    for (int i = 0;i < 3;i++) 
    {
        printf("음식 이름: ");
        scanf("%s", dayEaten[i].name);
        printf("칼로리: ");
        scanf("%d", &dayEaten[i].calories);    
    }

    // 칼로리 계산
    for (int i = 0;i < 3;i++)
        totalCalories += dayEaten[i].calories;
    
    // 결과 출력
    printf("총 칼로리: %d\n", totalCalories);
    return 0;
}