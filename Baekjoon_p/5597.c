#include <stdio.h>

int main()
{
    int studentNum[30] = {0}; // 30명 0으로 초기화
    int num;
    // 28명만 제출
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &num);
        studentNum[num - 1]++;
    }

    for (int i = 0; i < 30; i++)
    {
        if (studentNum[i] == 0)
            printf("%d\n", i + 1);
    }

    return 0;
}