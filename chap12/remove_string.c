// 문자열의 일부를 제거하는 함수 작성
#include <stdio.h>
#include <string.h>

void remove_string(char *s, int start, int n);

int main()
{
    char str[100];
    printf("문자열을 입력하시오: ");
    gets(str);
    remove_string(str, 0, 4);
    printf("%s\n", str);
    return 0;
}

void remove_string(char *s, int start, int n)
{
    // 삭제할 문자 위에 덮어쓰기
    for (int i = start; i < n; i++)
        s[i] = s[n + i];
    // 남은 문자들 자리 옮기기
    for (int i = n; i < strlen(s); i++)
        s[i] = s[n + i];
}