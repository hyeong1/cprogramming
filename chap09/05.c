// 1���� n������ ���� ����ϴ� ����-��ȯ����� �̿��Ͽ� �ۼ�
#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);

    printf("%d\n", sum(n));

    return 0;
}

int sum(int n)
{
    if (n <= 1) 
        return 1;
    else 
        return (n + sum(n-1));
}