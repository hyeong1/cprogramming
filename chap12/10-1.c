// ȸ�� �˻�
#include <stdio.h>
#include <string.h>

void palindrome(char *s);

int main()
{
    char s[100];
    printf("���ڿ� �Է�: ");
    scanf("%s", s);

    palindrome(s);

    return 0;
}

void palindrome(char *s)
{
    int i;
    for (i = 0;i < strlen(s)/2;i++) {
        if (s[i] != s[strlen(s)-1-i]) 
            printf("ȸ���� �ƴմϴ�.\n");
        else if (i == strlen(s)/2)
            printf("ȸ���Դϴ�.\n");
    }
}