// 사원들의 월급이 저장된 배열에서 월급이 n만원인 사원을 찾아 해당 요소의 인덱스를 반환하라
#include <stdio.h>

int Search(int *A, int size, int searchValue);

int main()
{
    int A[5] = {150, 175, 200, 250, 300};

    printf("월급이 %d만원인 사람의 인덱스 = %d\n", 200, Search(A, 5, 200));
    return 0;
}

int Search(int *A, int size, int searchValue)
{
    for (int i = 0;i < size;i++)
        if (A[i] == searchValue)
            return i;
}