// 문자열 연습문제 5
// 문자열을 받아서 영어 대문자는 소문자로, 소문자는 대문자로 변환하여 출력
// 입력받은 문자가 소문자면 대문자로, 대문자면 소문자로 변환
// 알파벳의 범위를 벗어나는 문자는 경고 메시지 출력
// 사용자가 '.' 입력하기 전까지 프로그램 되풀이
#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    while (1)
    {
        input = getchar();                     // 문자 입력받아서 input변수에 저장
        getchar();                             // 줄바꿈 문자 제거를 위해 getchar() 한 번 더 호출
        if (input == '.')
            return 0;
        else if (input >= 'A' && input <= 'Z')      // 입력받은 문자가 대문자면
            printf("%c\n", tolower(input));    // 소문자로 바꿔서 출력
        else if (input >= 'a' && input <= 'z') // 문자가 소문자면
            printf("%c\n", toupper(input));    // 대문자로 바꿔서 출력
        else
            printf("알파벳 대소문자를 입력하세요\n");
    } 

    return 0;
}