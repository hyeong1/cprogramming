// ����ڷκ��� ���� ���ڿ����� ������ ���ڰ� ��Ÿ���� �� ���
#include <stdio.h>
#include <string.h>

void PrintFre(char *s);

int main()
{
    char str[100];
    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(str);

    PrintFre(str);
    return 0;
}

void PrintFre(char *s)
{
    char alphabet[26] = {0};

    // ���ڿ� s���� ���ĺ� �󵵼� ã��
    for (int i = 0;i < strlen(s);i++)
    {
        if (s[i] == ' ') // ���ڰ� �����̸� �Ѿ��
            continue;
        alphabet[(int)s[i]-97]++;
    }

    // �󵵼� ����ϱ�
    for (int i = 0;i < 26;i++)
        printf("%c: %d\n", 97+i, alphabet[i]);
}