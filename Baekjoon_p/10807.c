#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, find, findNum; // 입력할 정수의 개수, 몇 개인지 찾고 싶은 정수, find 개수 변수
    scanf("%d", &n); // 입력할 정수의 개수 입력
    int *num = (int*)malloc(sizeof(int) * n); // 배열 n만큼 동적할당
    for (int i = 0;i < n;i++)
        scanf("%d", &num[i]); // 배열에 정수 입력
    
    scanf("%d", &find); // 몇 개인지 찾고 싶은 정수 입력
    findNum = 0;
    for (int i = 0;i < n;i++)
    {
        if (find == num[i])
            findNum++;
    }
    printf("%d", findNum);

    return 0;
}