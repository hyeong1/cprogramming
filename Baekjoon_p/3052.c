//두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 
//수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
#include <stdio.h>

int main()
{
    int num[10], index, result; 
    int count[42] = {0};// 나미저는 0~42이므로 체크할 배열크기가 42
    result = 0;

    for (int i = 0;i < 10;i++) // 배열에 값 저장
        scanf("%d", &num[i]);

    for (int i = 0;i < 10;i++) // 중복 횟수를 다른 배열에 저장
    {
        index = num[i] % 42; 
        count[index]++; // 나머지값에 해당하는 인덱스 값을 ++;
    }

    for (int i = 0;i < 42;i++)
    {
        if (count[i] != 0) // 0이 아니면 값이 존재하는 것이므로
            result++; // 서로 다른 수의 개수 하나 증가
    }
    printf("%d", result);
    return 0;
}