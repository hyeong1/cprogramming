// 주어진 값을 배열 A[]에서 탐색하여 배열 요소의 인덱스를 반환하는 함수를 작성하고 테스트하라
#include <stdio.h>

int Search(int *arr, int size, int serch);

int main()
{
    int A[10] = {100, 100, 100, 200, 1, 1, 1, 1, 1, 1};
    printf("월급이 200만원인 사람의 인덱스: %d\n", Search(A, 10, 200));
    return 0;
}

int Search(int *arr, int size, int searchNum)
{
    for (int i = 0;i < size;i++)
        if (*(arr+i) == searchNum)
            return i;
}