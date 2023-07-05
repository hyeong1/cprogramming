#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char s[1000];
        scanf("%s", s);

        printf("%c", s[0]);
        printf("%c\n", s[strlen(s) - 1]);
    }

    return 0;
}