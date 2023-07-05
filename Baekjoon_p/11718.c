#include <stdio.h>

int main()
{
    char s[100];
    for (int i = 0; i < 100; i++)
    {
        gets(s);
        printf("%s", s);
        s[0] = '\0';
        printf("\n");
    }

    return 0;
}