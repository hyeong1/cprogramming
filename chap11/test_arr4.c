// ���� ���� �ٲٱ�
// ���� �߿��� �ִ�M�� �������� ��ü ������ ����/M*100���� �ٲٱ�
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int exam, maxScore; // ���� ����, �ִ� �������� ����
    double *score, total;      // ���� �迭 -> ���� �ٲ� �� �� ������ �����ϱ� ������ �Ǽ������� ����
    scanf("%d", &exam); // ���� ���� �Է�

    score = (double *)calloc(sizeof(double), exam); // ���� ������ŭ ���� �迭 �����Ҵ�
    for (int i = 0; i < exam; i++)                  // ���� ������ �Է� �ޱ����� �ݺ���
        scanf("%lf", (score + i));                  //*(score+i)

    for (int i = 0; i < exam; i++)
        printf("%lf ", *(score + i));
    printf("\n");

    maxScore = *score;             // �ִ� ���������� score�迭�� ù ��° ������ ����
    for (int i = 1; i < exam; i++) // �ִ� ���� ������ ã������ �ݺ���
    {
        if (maxScore < *(score + i))
            maxScore = *(score + i);
    }

    // �ִ� ���� �������� ��ü ���� �ٲٱ�
    for (int i = 0; i < exam; i++)
        *(score + i) = (*(score + i) / maxScore) * 100;

    for (int i = 0; i < exam; i++) // �ٲ� �迭 ���
        printf("%lf\n", *(score + i));

    for (int i = 0;i < exam;i++) // ��� ���ϱ� ���ؼ� ���� ���� ���ϱ�
        total += *(score+i);
    printf("%lf\n", total/exam);

    return 0;
}