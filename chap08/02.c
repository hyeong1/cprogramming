// �Էµ� ���ڰ� ���ĺ� �������� �ƴ��� �˻��ϴ� �Լ�
#include <stdio.h>
/*
void check_alpha(char ch);

int main() 
{
    char ch;
    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf(" %c", &ch);

    check_alpha(ch);

    return 0;
}

void check_alpha(char ch)
{
    if (ch >= 97 || ch < 123)
        printf("%c�� ���ĺ� �����Դϴ�.\n", ch);
}*/
int CheckAlpha(char ch)
{
    /*if (ch >= 'a' && ch <= 'z')
        printf("%c�� ���ĺ� �����Դϴ�.\n", ch);
    else
        printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.\n", ch);*/
    return (ch >= 'a' && ch <= 'z');
}

int main()
{
    char ch;
    scanf(" %c", &ch);
    if (CheckAlpha(ch))
        printf("%c�� ���ĺ� �����Դϴ�.\n", ch);
    else
        printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.\n", ch);
    return 0;
}