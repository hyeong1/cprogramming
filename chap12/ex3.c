// ���ڿ��� �޾Ƽ� ���ڿ��� ���Ե� ���ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ� str_upper
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void str_upper(char *s);

int main()
{
    char s[100];
    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(s);

    str_upper(s);
    return 0;
}

void str_upper(char *s)
{
    for (int i = 0;i < strlen(s);i++)
        printf("%c", toupper(s[i]));
    printf("\n");
}