// ���ڿ� �������� 6
// ���ڿ��� �Է¹޾Ƽ� ���Ե� ���ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void StrUpper(char *s);

int main()
{   
    char str[100];
    printf("���ڿ� �Է�: ");
    scanf("%s", str);
    StrUpper(str);

    return 0;
}

void StrUpper(char *s)
{
    for (int i = 0;i < strlen(s);i++)
        printf("%c", toupper(s[i])); // ���ڿ��� ���ڸ� ��� �빮�ڷ� ��ȯ�ؼ� ���
}