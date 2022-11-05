// 크로아티아 알파벳 찾기
#include <stdio.h>
#include <string.h>

int main()
{
    char input[101];
    int len, check = 0;
    scanf("%s", input);

    len = strlen(input);
    // printf("%d\n", len);
    for (int i = 0; i < len;) // 반복문에서 i++조건 주지 않고 아래 조건문에서 i 증가시키기
    {
        if (input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=') // i~i+2 문자가 "dz="면 -각각의 경우 비교
        {
            check++; // 글자수 +1하고
            i += 3;  // i는 3 증가시키기
            // printf("%d %c %d\n", i,input[i], check);
        }
        else if (input[i] == 'c' && input[i + 1] == '=')
        {
            check++;
            i += 2;
        }
        else if (input[i] == 'c' && input[i + 1] == '-')
        {
            check++;
            i += 2;
        }
        else if (input[i] == 'd' && input[i + 1] == '-')
        {
            check++;
            i += 2;
        }
        else if (input[i] == 'l' && input[i + 1] == 'j')
        {
            check++;
            i += 2;
        }
        else if (input[i] == 'n' && input[i + 1] == 'j')
        {
            check++;
            i += 2;
        }
        else if (input[i] == 's' && input[i + 1] == '=')
        {
            check++;
            i += 2;
        }
        else if (input[i] == 'z' && input[i + 1] == '=')
        {
            check++;
            i += 2;
        }
        else // 위 경우가 다 아니면
        {
            check++; // 한 글자로 봄
            i++;
        }
    }
    printf("%d\n", check);
    return 0;
}