// 10������ 2������ ��ȯ�Ͽ� ����ϴ� ���α׷�
// �ִ� 32�ڸ����� ��ȯ�� ����
// 10������ 2�� ����� ������ �������� �������� ��Ÿ���� 2������ ǥ���� �� �ִ�.
#include <stdio.h>

int DecToBin(int binary[], int dec); // 10������ 2������ �ٲ��ִ� �Լ�

int main()
{
    int binary[32];
    int decimal, size;
    scanf("%d", &decimal);
    size = DecToBin(binary, decimal) - 1;

    printf("%d -> ", decimal);
    for (int i = size;i >= 0;i--)
       printf("%d", binary[i]);
    printf("\n");
    
    return 0;
}

int DecToBin(int binary[], int dec)
{
    int i;
    for (i = 0;i < 32 && dec > 0;i++)
    {
        binary[i] = dec % 2;
        dec = dec / 2;
    }
    return i; // i�� ����� ������ �迭 ����� �ε���-1
}