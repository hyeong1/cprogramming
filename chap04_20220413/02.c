#include <stdio.h>

int main()
{
    //16���� �Է¹޾Ƽ� 8����, 10����, 16���� ���·� ���
    int hexa;
    printf("16���� ������ �Է��Ͻÿ�: ");
    scanf("%x", &hexa);

    printf("8�����δ� %#o�Դϴ�.\n", hexa);
    printf("10�����δ� %d�Դϴ�.\n", hexa);
    printf("16�����δ� %#x�Դϴ�.", hexa);

    return 0;
}