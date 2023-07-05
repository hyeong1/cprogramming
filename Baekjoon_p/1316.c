#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int test_case, check;
    scanf("%d", &test_case);
    check = test_case;

    for (int i = 0; i < test_case; i++)
    {
        scanf("%s", s);
        int alphabet[26] = {0};

        for (int j = 0; j < strlen(s); j++)
        {
            if (alphabet[(int)s[j] - 97] == 0)
            {                               // 체크 안되어 있으면
                alphabet[(int)s[j] - 97]++; // 알파벳 배열 1 증가시키고
                continue;                   // 다음 반복하기
            }
            else if (s[j] == s[j - 1]) // 체크 되어있으면서 앞 문자랑 같으면 넘어감
                continue;
            else if (s[j] != s[j - 1]) // 체크 되어있는데 앞 문자랑 다르면
            { 
                check--;
                break;
            }
        }
        s[0] = '\0';
        alphabet[0] = '\0';
    }
    printf("%d", check);
    return 0;
}