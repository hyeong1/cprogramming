// �л����� ������ 4.3�� ������ ��, �л����� ������ 100�� �������� ��ȯ�Ͽ� scores[]�� �����ϴ� �Լ��� �ۼ�
#include <stdio.h>

void PrintArr(double *arr, int size);
void convert(double *grades, double *scores, int size);

int main()
{
    double grades[10] = {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3};
    double scores[10] = {0};

    PrintArr(grades, 10);
    convert(grades, scores, 10);
    printf("\n");
    PrintArr(scores, 10);

    return 0;
}

void PrintArr(double *arr, int size) // �迭 ����Լ�
{
    for (int i = 0; i < size; i++)
        printf("%.2lf ", arr[i]);
}
void convert(double *grades, double *scores, int size)
{
    for (int i = 0; i < size; i++)
        scores[i] = (100 / 4.3) * grades[i]; // 100:4.3 = x:y -> x:scores[] ���, y:grades[]���
}