#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    int* answer = (int*)malloc(sizeof(int) * 11);
    int i = 0;
    while (n)
    {
        answer[i++] = n % 10;
        n /= 10;
    }
    return answer;
}

int main()
{
    solution(12345);
    return 0;
}
