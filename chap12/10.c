// ���ڿ� �������� 10
// ȸ�� ���� �Ǻ��ϱ�
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void ToLower(char *s);      // ���ڸ� ��� �ҹ��ڷ� �ٲٴ� �Լ�(��ҹ��� �����ϱ� ����)
void IsPalindrome(char *s); // ���ڿ��� ȸ������ �˻��ϴ� �Լ�

int main()
{
    char s[100];
    scanf("%[^\n]s", s);
    ToLower(s);

    IsPalindrome(s);

    return 0;
}

void ToLower(char *s)
{
    for (int i = 0; i < strlen(s); i++)
        s[i] = tolower(s[i]);
}

void IsPalindrome(char *s)
{
    for (int i = 0, j = strlen(s) - 1; i < strlen(s) / 2; i++) // ������ ���ڿ� ���� ���ݱ��� - i: �պκ� �ε���, j:�޺κ� �ε���
    {
        // printf("i: %d, j: %d\n", i, j); --> i, j �� Ȯ�ο�
        if (i == j) // i�� j�� ���� ������ �ݺ��� ����
            break;
        else if (s[i] != s[j]) // ���� ���ϴ� �߰��� ���� �ٸ� ���ڰ� ������
        {
            printf("ȸ���� �ƴմϴ�.\n"); // ȸ�� �ƴ϶�� ����ϰ�
            exit(0);                      // ��������
        }
        else        // s[i]�� s[j]�� ������
            j -= 1; // �� ���� �ε��� j�� 1�� ����
    }
    printf("ȸ���Դϴ�.\n");
}