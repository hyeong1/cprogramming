// ���������� ��������1
// 5�� ������ �Ӵ��� ���ڿ��� ���·� �Լ� SetProverb() ���ο� ����
// �Լ� ȣ�� �� �μ��� ���� ���������͸� �̿��Ͽ� �ܺο� �ִ� char�� ������ s�� ����
#include <stdio.h>
#include <string.h>

void SetProverb(char **p,int n);

int main()
{
    int find;
    char *f;
    printf("�� ��° �Ӵ��� �����Ͻðڽ��ϱ�?");
    scanf("%d", &find);

    SetProverb(&f, find);
    printf("selected proverb = %s\n", f);

    return 0;
}

void SetProverb(char **p,int n)
{
    char *str[3] = {"hi", "hello", "wow"};
    *p = str[n-1]; 
}