#include <stdio.h>

// 나머지 반환하는 함수
void returnMod(int num, int sys)
{
    // printf("%d\n", num/sys);
    if ((num / sys) > 0) {
        returnMod(num / sys, sys);
        if ((num % sys) < 10)
            printf("%d", num % sys);
        else
            printf("%c", num % sys + 55);
    } else {
        if ((num % sys) < 10)
            printf("%d", num % sys);
        else
            printf("%c", num % sys + 55);
    }
}

int main()
{
    int num, sys;
    scanf("%d %d", &num, &sys);

    returnMod(num, sys);

    return 0;
}