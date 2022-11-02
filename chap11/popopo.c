// 사이즈가 30인 배열 생성
// 값을 i+1로 초기화하고 값들 출력
// 모두 포인터 사용
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 30;
    int *arr = (int *)calloc(sizeof(int), n);
    for (int i = 0; i < n; i++)
        *(arr + i) = i + 1;
    for (int i = 0; i < n; i++) // 사이즈 30인 배열 요소 값 출력하는 반복문
        printf("%d ", *(arr + i));
    return 0;
}