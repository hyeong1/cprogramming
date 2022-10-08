// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 최댓값이 몇 번째 수인지 출력
// 첫째 줄에 최댓값 출력, 둘째 줄에 몇 번째 수인지 출력
#include <stdio.h>

int main()
{
    int num[9], max, index; // 입력할 값을 저장할 배열, 최댓값 저장 변수, 최댓값의 인덱스 저장 변수 선언
    for (int i = 0;i < 9;i++) // 입력한 자연수를 배열에 저장
        scanf("%d", &num[i]);

    max = num[0]; // 최댓값 저장할 변수에 num[0]이 최댓값이라고 가정

    for (int i = 1;i < 9;i++)
    {
        if (max < num[i])
        {
            max = num[i];
            index = i;
        }
    }
    
    printf("%d\n%d", max, index+1);

    return 0;
}