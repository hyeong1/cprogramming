// 입력된 숫자 거꾸로 비교하기 - 문자열 풀이
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num1[4] = {0}, num2[4] = {0}, reNum1[4] = {0}, reNum2[4] = {0}; // 숫자 입력 배열이랑 거꾸로 배열
    int num1ToInt, num2ToInt, j;
    scanf("%s %s", num1, num2);

    // 숫자 거꾸로 해서 새로운 배열 reNum1, reNum2에 저장
    j = 2;
    for (int i = 0; i < 3; i++)
    {
        reNum1[j] = num1[i];
        reNum2[j] = num2[i];
        j--;
    }

    num1ToInt = atoi(reNum1); // 숫자 거꾸로 배열 정수로 바꾸기
    num2ToInt = atoi(reNum2); // 숫자 거꾸로 배열 정수로 바꾸기

    // 크기 비교
    if (num1ToInt > num2ToInt)
        printf("%d", num1ToInt);
    else if (num1ToInt < num2ToInt)
        printf("%d", num2ToInt);

    return 0;
}
