#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows�� 2���� �迭 sizes�� �� ����, sizes_cols�� 2���� �迭 sizes�� �� �����Դϴ�.
int solution(int (*sizes)[2], int sizes_rows, int sizes_cols)
{
    int maxW, maxH, minRectangle, newRectangle; // �ִ� ���� ũ��, �ִ� ���� ũ��, �ּ� ���簢�� ũ��
    int temp;

    // 2���� �迭 ó�� ���¿��� �ּ� ���簢�� ũ�� ���ϱ�
    // ���� �ִ� ���� ũ��, �ִ� ���� ũ�� ���ϱ�
    maxW = sizes[0][0];
    maxH = sizes[0][1];
    for (int i = 1; i < sizes_rows; i++)
    {
        if (maxW < sizes[i][0])
            maxW = sizes[i][0];
        if (maxH < sizes[i][1])
            maxH = sizes[i][1];
    }
    // �ּ� ���簢�� ũ�� ���ϱ�
    minRectangle = maxW * maxH;

    // ���� ���̰� ���� ���̺��� ū ��� ����, ���� ��ġ �ٲ㼭 ���ο� �ּ� ���簢�� ũ�� ���ϱ�
    for (int i = 0; i < sizes_rows; i++)
    {
        if (sizes[i][0] < sizes[i][1])
        { // ���κ��� ���ΰ� �� ũ��
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp; // ����, ���� ��ġ �ٲٱ�
        }
    }
    // ���ο� �ּ� ���簢�� ���ϱ�
    maxW = sizes[0][0];
    maxH = sizes[0][1];
    for (int i = 1; i < sizes_rows; i++)
    {
        if (maxW < sizes[i][0])
            maxW = sizes[i][0];
        if (maxH < sizes[i][1])
            maxH = sizes[i][1];
    }
    newRectangle = maxW * maxH;

    // ���ο� �ּ� ���簢���� ���� ���� �ּ� ���簢�� ũ�� ��
    if (minRectangle > newRectangle) // ���� ���� �ּ� ���簢���� �� ũ��
        minRectangle = newRectangle; // ���� �ּ� ���簢�� ũ�� �ٲٱ�

    return minRectangle;
}

int main()
{
    int sizes[4][2] = {{60, 50},
                       {30, 70},
                       {60, 30},
                       {80, 40}};

    printf("%d\n", solution(sizes, 4, 2));
}