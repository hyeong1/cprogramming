// ���ڸ� �޾Ƽ� �������� �˻��ϴ� �Լ�
// ���ڰ� �ԷµǸ� 1, �ƴϸ� 0 ��ȯ
#include <stdio.h>

int IsDigit(char ch);
int main()
{
    char ch;
    scanf(" %c", &ch);

    if (IsDigit(ch)) // 1�� ��ȯ�Ǹ�
        printf("%c�� �����Դϴ�.\n", ch);
    else
        printf("%c�� ���ڰ� �ƴմϴ�.\n", ch);

    return 0;
}

int IsDigit(char ch)
{
    if (ch >= '0' && ch <= '9') // ���ڰ� 0�̻��̰� 9���ϸ�
        return 1;               // �����̹Ƿ� 1 ��ȯ
    else                        // �ƴϸ�
        return 0;               // 0 ��ȯ
}