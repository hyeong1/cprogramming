// ȸ�� �˻� ���α׷�
// ��ҹ��� ����X
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(str);

    // ȸ�� �˻�
    // ��ҹ��� ���� ���ֱ� ���� ��� �ҹ��ڷ� ��ȯ
    for (int i = 0;i < strlen(str);i++)
        str[i] = tolower(str[i]);
    // �˻� �κ�
    for (int i = 0;i < strlen(str)/2;i++)
    {
        if (str[i] != str[strlen(str)-1-i])
        {
            printf("ȸ�� �ƴ�\n");
            break;
        }
        printf("ȸ�� ����\n");
    }

    return 0;
}