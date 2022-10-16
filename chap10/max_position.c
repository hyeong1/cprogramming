// 9개의 서로 다른 자연수를 입력받아 최댓값을 찾고, 최댓값이 몇 번째 수인지 출력
// 최댓값 변수, 최댓값 찾은 즉시 해당 인덱스 기억할 변수
#include <stdio.h>

int main()
{
    int num[9], max, maxIndex; // 정수 배열, 최댓값 변수, 최댓값 변수의 인덱스
    for (int i = 0;i < 9;i++)
        scanf("%d", &num[i]);

    max = num[0];
    for (int i = 0;i < 9;i++)
    {
        if (max < num[i]) // 최댓값으로 가정한 값이 num[i]보다 작으면
        {
            max = num[i]; // 최댓값 num[i]로 교체
            maxIndex = i; // 최댓값 인덱스로 i 저장
        }
    }

    printf("최댓값 %d는 %d번째 수\n", max, maxIndex+1); // 출력할 때 인덱스+1

    return 0;
}