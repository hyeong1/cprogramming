// 동적메모리 할당 연습문제
// 사용자로부터 양의 정수들의 합을 구하는 프로그램을 작성
// 사용자로부터 정수의 개수 입력
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int *num, sum = 0; // 정수 저장할 배열과 정수들의 합 저장할 변수
    // 사용자로부터 정수의 개수 입력받기
    printf("정수의 개수: ");
    scanf("%d", &size);

    // 개수만큼 num배열 동적할당 후 정수 입력
    num = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        printf("양의 정수를 입력하시오: ");
        scanf("%d", &num[i]);
    }

    // 합 구하기
    for (int i = 0; i < size; i++)
        sum += num[i];

    // 결과 출력
    printf("합은 %d입니다.\n", sum);

    free(num); // 동적 메모리 할당으로 받은 메모리 반납

    return 0;
}