// 2���� ������ �Է¹ް� �� ������ ���� ����ϴ� ���α׷�
#include <stdio.h>

void GetInt(int *px, int *py);

int main()
{
    int num1, num2;
    
    GetInt(&num1, &num2);
    
    printf("������ ���� %d\n", num1+num2);
    return 0;
}

void GetInt(int *px, int *py)
{
    printf("2���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", px, py);
}