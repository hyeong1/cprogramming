// ���� �߿��� �ִ� M�� ���� ��� ������ (���� / M * 100) ��ħ
// ������ �� ������� ���� ������� ��, ���ο� ����� ���Ͻÿ�
// ù° �ٿ� ���� �� ������ ���� N, ���� �ٿ� ���� �Է�
#include <stdio.h>
#include <stdlib.h>

void InputScore(double *arr, int n);
int MaxScore(double *arr, int n);
void ChangeScore(double *arr, int n, int max);

int main()
{
    int N;
    double M;
    double sum = 0; // ��� ���� ���� �� ����
    scanf("%d", &N);
    double* score = (double*)malloc(sizeof(double) * N);
    
    InputScore(score, N); // ���� �Է�
    M = MaxScore(score, N); // �ִ� ã��
    ChangeScore(score, N, M); // ���� ���� ����ϱ�

    for (int i = 0;i < N;i++) // ���ο� ������ ���� ���� �� ���
        sum += score[i];
    printf("%lf", sum / N); // ���ο� ���� ��� ���

    return 0;
}

void InputScore(double *arr, int n)
{
    for (int i = 0;i < n;i++) // ���� �Է�
        scanf("%lf", &arr[i]);
}

int MaxScore(double *arr, int n)
{
    double max = arr[0];
    for (int i = 1;i < n;i++) // �ִ� ���� ã��
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

void ChangeScore(double *arr, int n, int max)
{
    for (int i = 0;i < n;i++) // ���� ���� ����ϱ�
        arr[i] = arr[i] / max * 100;
}