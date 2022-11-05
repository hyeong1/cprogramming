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
    for (int i = 0; i < len;)
    {
        if (input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=') // i~i+2 문자가 "dz="면
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
        else
        {
            check++;
            i++;
        }
    }
    printf("%d\n", check);
    return 0;
}