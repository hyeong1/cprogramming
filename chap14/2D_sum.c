// 2차원 배열의 합 구하기
// 1차원 배열의 합을 구하는 함수 사용
// 함수 호출해서 각 행의 합을 구하고, 이것들을 모두 합쳐 전체 2차원 배열 합 구하기
#include <stdio.h>

int get_sum(int *arr, int size); // 1차원 배열의 합을 구하는 함수
int main()
{
    int num[3][6] = {{10, 10, 10, 10, 10, 10},
                     {10, 10, 10, 10, 10, 10},
                     {10, 10, 10, 10, 10, 10}};
    int total = 0;
    for (int i = 0;i < 3;i++)
    {
        total += get_sum(num[i], 6); // 행을 인수로 보내고, size는 열 크기 
        printf("%d\n", get_sum(num[i], 6));
    }
    printf("%d\n", total);    

    return 0;
}

int get_sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0;i < size;i++)
        sum += *(arr+i);
    return sum;
}