// 문자를 받아서 숫자인지 검사하는 함수
// 숫자가 입력되면 1, 아니면 0 반환
#include <stdio.h>

int IsDigit(char ch);
int main()
{
    char ch;
    scanf(" %c", &ch);

    if (IsDigit(ch)) // 1이 반환되면
        printf("%c는 숫자입니다.\n", ch);
    else
        printf("%c는 숫자가 아닙니다.\n", ch);

    return 0;
}

int IsDigit(char ch)
{
    if (ch >= '0' && ch <= '9') // 문자가 0이상이고 9이하면
        return 1;               // 숫자이므로 1 반환
    else                        // 아니면
        return 0;               // 0 반환
}