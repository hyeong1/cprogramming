// 이중포인터 연습문제 2
// 2차원 배열에 정수가 저장
// 1차원 배열에 저장된 정수의 합을 구하는 int get_sum(int array[], int size)
// 2차원 배열의 각 행에 대하여 get_sum()을 호출해서 각 행의 합 구하고, 이것들을 합쳐 전체 합 구하기
#include <stdio.h>

int get_sum(int *array, int size); // 1차원 배열의 합을 구하는 함수

int main()
{
    int num[5][3] = {{10, 10, 10},
                     {10, 20, 30},
                     {5, 5, 5},
                     {1, 1, 1},
                     {2, 2, 2}};
    int total = 0; // 각 행의 합을 합칠 변수
    // 각 행의 합 합치기
    for (int i = 0; i < 5; i++)
        total += get_sum(num[i], 3);

    // 결과 출력
    printf("총 합: %d\n", total);

    return 0;
}

int get_sum(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    return sum;
}