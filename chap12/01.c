// 문자열 연습문제 1번
// 사용자로부터 문자를 입력받아서 그 문자의 아스키 코드값을 출력
#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    scanf("%c", &input);
    printf("%d", toascii(input));
    return 0;
}