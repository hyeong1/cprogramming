#include <stdio.h>

int main()
{
    char s[][10] = {"HIGH", "MIDDLE", "LOW"};
    printf("%s", *s + 2);

    return 0;
}