// ������������ ���ĵ� �迭�� ���ڸ� �Է¹޾��� �� �ش� ������ �ڸ� ã��
#include <stdio.h>

int main()
{
    int num[6], input; // ������������ ���� 6�� �Է¹ޱ�
    for (int i = 0; i < 6; i++)
        scanf("%d", &num[i]);
    scanf("%d", &input);

    // �ڸ� ã�Ƽ� ���
    if (input < num[0]) // input�� num�迭�� ù ��� ���� ������ ���� ���� ���
        printf("%d ", input);
    for (int i = 0; i < 6; i++) // ���ĵ� �迭 ��ü�� �� ����
    {
        printf("%d ", num[i]); // ���� �迭�� ��� ���
        if (input > num[i] && input < num[i + 1]) // i��°���� �۰� i+1���� ũ�� input�� i�� i+1���̿� ��ġ
            printf("%d ", input); 
    }
    if (input > num[5]) // input�� num�迭�� ������ ��� ���� ũ�� ���� �������� ���
        printf("%d ", input);

    return 0;
}