// �μ��� ����ŭ ��ǥ ���ڸ� ����ϴ� �Լ� print_value(int n) �ۼ�
// ����ڰ� ������ �Է��ϸ� �ݺ� �ߴ�
#include <stdio.h>

void print_value(int n);

int main()
{
    int inputN;
    do
    {
        printf("���� �Է��Ͻÿ�(����� ����): ");
        scanf("%d", &inputN);

        print_value(inputN);
    } while (inputN > 0);
        
    return 0;
}

void print_value(int n)
{
    for (int i = 0;i < n;i++)  
        printf("*");
    printf("\n");
}