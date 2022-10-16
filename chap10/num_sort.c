// 오름차순으로 정렬된 배열에 숫자를 입력받았을 때 해당 숫자의 자리 찾기
#include <stdio.h>

int main()
{
    int num[6], input; // 오름차순으로 정수 6개 입력받기
    for (int i = 0; i < 6; i++)
        scanf("%d", &num[i]);
    scanf("%d", &input);

    // 자리 찾아서 출력
    if (input < num[0]) // input이 num배열의 첫 요소 보다 작으면 제일 먼저 출력
        printf("%d ", input);
    for (int i = 0; i < 6; i++) // 정렬된 배열 전체를 볼 것임
    {
        printf("%d ", num[i]); // 기존 배열은 계속 출력
        if (input > num[i] && input < num[i + 1]) // i번째보다 작고 i+1보다 크면 input은 i와 i+1사이에 위치
            printf("%d ", input); 
    }
    if (input > num[5]) // input이 num배열의 마지막 요소 보다 크면 제일 마지막에 출력
        printf("%d ", input);

    return 0;
}