// ���ڿ� �迭�� �μ��� �޾Ƽ� ����� ���ڿ� ���� ����ϱ�
#include <stdio.h>

void pr_str_array(char **dp);

int main()
{
    char *str[3] = {"i am a boy", "hello world", "sugar dance"};
    pr_str_array(str);
    return 0;
}

void pr_str_array(char **dp)
{
    for (int i = 0;i < 3;i++)
        printf("%s\n", *(dp+i));
}