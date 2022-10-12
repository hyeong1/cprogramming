#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, AXIS = 0;
    scanf("%d", &n);
    
    int** xy = (int**)malloc(sizeof(int*) * n); // n��ŭ�� ��
    for (int i = 0;i < n;i++)
        xy[i] = (int*)malloc(sizeof(int) * 2); // ��ǥ�ϱ� �� �ϳ��� 2��
    // ��ǥ �Է�
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < 2;j++)
            scanf("%d", &xy[i][j]);
    }

    // ��ǥ �˻�
    for (int i = 0;i < n;i++) // n�� �ݺ�
    {
        if (xy[i][0] == 0 || xy[i][1] == 0) // x�� �Ǵ� y���� 0�̸� �˿� ����
            AXIS++;
        else
        {
            if (xy[i][0] > 0) // x���� ����� ��
            {
                if (xy[i][1] > 0) // y���� �����
                    Q1++; // 1��и鿡 ����
                else // y���� ������
                    Q4++; // 4��и鿡 ����
            }
            else // x���� ������ ��
            {
                if (xy[i][1] > 0) // y���� �����
                    Q2++; // 2��и鿡 ����
                else // y���� ������
                    Q3++; // 3��и鿡 ����
            }
        }
    }

    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", Q1, Q2, Q3, Q4, AXIS);

    return 0;
}