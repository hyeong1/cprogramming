// �л����� ������ 4.3���� �����̶� ����
// �迭 grades[]�� �л� 10���� ������ ����Ǿ��ִ�. �̰��� 100�� �������� ��ȯ�Ͽ��� �迭 scores[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
#include <stdio.h>

void PrintArr(double *arr, int size);                   // �迭 ��� ��� �Լ�
void Convert(double *grades, double *scores, int size); // ������ 100�� �������� ��ȯ�ϴ� �Լ�

int main()
{
    double grades[10] = {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3}; // �л����� ���� �迭
    double scores[10] = {0};                                                // ������ 100�� �������� ��ȯ�� ���� �����ϴ� �迭

    Convert(grades, scores, 10); // ���� 100�� �������� ��ȯ
    PrintArr(grades, 10);
    PrintArr(scores, 10);

    return 0;
}

void PrintArr(double *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%05.2lf\t", *(arr + i)); // %05.2lf --> �Է� ���� ���߱�
    printf("\n");
}

void Convert(double *grades, double *scores, int size)
{
    for (int i = 0; i < size; i++)
        *(scores + i) = *(grades + i) * (100 / 4.3);
}