#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char n[100];
    int method;
    long result = 0;
    scanf("%s %d", n, &method);

    for (int i = 0; i < strlen(n); i++)
    {
        long mid;
        if (isdigit(n[i])) // 숫자일 때
            mid = n[i] - '0';
        else // 문자일 때
            mid = n[i] - '7';
        for (int j = 0; j < strlen(n) - 1 - i; j++)
        {
            mid *= method;
        }
        result += mid;
    }

    printf("%d", result);
    return 0;
}