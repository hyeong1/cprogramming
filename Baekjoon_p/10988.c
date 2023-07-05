#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int result = 1;
    scanf("%s", s);

    for (int i = 0; i < ((strlen(s)) / 2); i++)
    {
        if (s[i] != s[strlen(s) - 1 - i])
        {
            result = 0;
            break;
        }
    }

    printf("%d", result);

    return 0;
}