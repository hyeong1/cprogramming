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
            {                               // üũ �ȵǾ� ������
                alphabet[(int)s[j] - 97]++; // ���ĺ� �迭 1 ������Ű��
                continue;                   // ���� �ݺ��ϱ�
            }
            else if (s[j] == s[j - 1]) // üũ �Ǿ������鼭 �� ���ڶ� ������ �Ѿ
                continue;
            else if (s[j] != s[j - 1]) // üũ �Ǿ��ִµ� �� ���ڶ� �ٸ���
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