// ����� �������� ���� �ٽ� Ǯ��
// 5kg, 3kg¥�� ���� -�ִ��� ���� ������
// 5kg�� 3kg�� ���� �� ������ -1 ��ȯ
#include <stdio.h>

int main()
{
    int N, result;
    scanf("%d", &N);

    result = 0;
    // 5kg, 3kg�� N�� ���� �� ���� ���
    if ((N / 5) == 0 && (N / 3) == 0)
    {
        result = -1;
    }
    // ���� �� �ִ� ���
    else
    {
        if ((N % 5) % 3 == 0)
            result = (N / 5) + ((N % 5) / 3);
        else
            result = (N / 3);
    }

    printf("%d\n", result);

    return 0;
}