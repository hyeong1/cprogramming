// ��ȯ ȣ��� ������ �� �ڸ����� ����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ
// 1234 �Է� �� ��� 1 2 3 4
#include <stdio.h>

void ShowDigit(int x);

int main()
{
    int num;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    ShowDigit(num);

    return 0;
}
/*
void ShowDigit(int x)
{
    if (x > 10)
    {
        ShowDigit(x / 10);
        printf("%d ", x % 10);
    }
    else
        printf("%d ", x);
}*/
void ShowDigit(int x)
{
    if (x > 10)
        ShowDigit(x / 10); // �� ��ȯȣ��
    printf("%d ", x % 10);
}