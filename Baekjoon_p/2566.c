// 9*9 ��� �Է¹ް� �ִ� ã��
// �ִ񰪰� �ִ��� ��ġ(�� �� �� ��) ����ϱ�
#include <stdio.h>

int main()
{
    int matrix[9][9], maxRow, maxCol;
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            scanf("%d", &matrix[i][j]); // ��� �� �Է¹ޱ�

    // �ִ� ã�� - 0�� 0������ ����
    maxRow = 0;
    maxCol = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (matrix[maxRow][maxCol] < matrix[i][j])
            {
                maxRow = i;
                maxCol = j;
            }
        }
    }
    // �ִ񰪰� �ִ� ��ġ ���(��ġ�� +1�ؼ� ���)
    printf("%d\n%d %d", matrix[maxRow][maxCol], maxRow + 1, maxCol + 1);
    return 0;
}