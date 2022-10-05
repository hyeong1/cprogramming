#include <stdio.h>

int main()
{
    int num1[10];
    double num2[20] = {1};

    for (int i = 0;i < 10;i++) 
        num1[i] = 1; // 배열을 1로 초기화
    for (int i = 0;i < 10;i++)
        num1[i+1] += num1[i];

    printf("%d\n", num1[8]);
    //for (int i = 0;i < 10;i++)
    //    printf("%d\n", num1[i]);
    return 0;
}