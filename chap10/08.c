// ����ڰ� �Է��ϴ� 10���� �Ǽ� �ڷ��� ��հ� ǥ�� ������ ����ϴ� ���α׷� �ۼ�
#include <stdio.h>
#include <math.h>

void InsertArr(int *arr, int size);
double ArrayAvg(int *arr, int size); // �迭�� ����� ����ϴ� �Լ�
double ArrayStdDev(int *arr, int size, double avg); // �迭�� ǥ�� ������ ����ϴ� �Լ�

int main()
{
    int num[10], size; // ũ�Ⱑ 10�� 1���� �迭, �迭�� ũ��
    double avg, stdDev; // �迭 ���, �迭 ǥ�� ����

    size = sizeof(num) / 4;
    InsertArr(num, size);

    avg = ArrayAvg(num, size);
    stdDev = ArrayStdDev(num, size, avg);
    printf("���: %lf\nǥ�� ����: %lf\n", avg, stdDev);

    return 0;
}

void InsertArr(int *arr, int size)
{
    for (int i = 0;i < size;i++)
    {
        printf("������ �Է�: ");
        scanf("%d", &arr[i]);
    }
}

double ArrayAvg(int *arr, int size)
{
    int sum = 0;
    for (int i = 0;i < size;i++) // �迭 ��Ҹ� sum ������ ��� ���ؼ� sum�� size�� ���� �� ����
        sum += arr[i];
    return (sum / size); // sum�� size�� ���� �� ����
}

double ArrayStdDev(int *arr, int size, double avg)
{
    double sumDev = 0; // �л� �� �����ϴ� ���� - ǥ�� ������ �л�*1/2
    for (int i = 0;i < size;i++)
        sumDev += (arr[i] - avg) * (arr[i] - avg); // �л� ���
    return sqrt(sumDev / size); // �� �л� ���� ������ ����
}