// ù° �ٿ� �׽�Ʈ ���̽� ���� C�Է�
// ��° �ٺ��� �� �׽�Ʈ ���̽� ���� �л��� ��N, �̾ N���� �� �Է�
// �� ���̽� ���� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ���
#include <stdio.h>
#include <stdlib.h>

void InputScore(double *arr, int n); // �Է��� ������ �迭�� �ִ� �Լ�
double Avg(double *arr, int n); // ��� ���ϴ� �Լ�
int StudentCount(double *arr, int n, double avg); // ��� �Ѵ� �л� �� üũ�ϴ� �Լ�
double AvgRate(int n, int count); // ��� �Ѵ� �л����� ������ ���ϴ� �Լ�

int main()
{
    int c, n; // �׽�Ʈ ���̽� ����, �л� ��, ��� �Ѵ� �л� üũ ����
    double *score, avg; // ���� �迭, ��� ���� ����
    scanf("%d\n", &c); // �׽�Ʈ ���̽� ���� �Է�

    for (int i = 0;i < c;i++) // �� ���̽��� c�� �ݺ�
    {
        scanf("%d", &n); // �л� �� �Է�
        score = (double*)malloc(sizeof(double) * n);

        InputScore(score, n); // ���� �Է�

        // ���̽� ���� ����� �Ѵ� �л� �� ���� ���
        avg = Avg(score, n); // 1. ��� ���ϱ�

        // 2. ���� ���ؼ� �Ҽ��� ��° �ڸ�� ����ϱ�
        printf("%.3lf%%\n", AvgRate(n, StudentCount(score, n, avg))); 
    }   
     
    return 0;
}

void InputScore(double *arr, int n)
{
    for (int i = 0;i < n;i++)
        scanf("%lf", &arr[i]);   
}

double Avg(double *arr, int n)
{
    double avg = 0;
    for (int i = 0;i < n;i++)
            avg += arr[i];
    return (avg / n);
}

int StudentCount(double *arr, int n , double avg) // ��ü �л� ���� ����� �޾Ƽ� count ���
{
    int count = 0;
    for (int i = 0;i < n;i++) // �������� ��հ� ���ϸ鼭 
    {
        if (arr[i] > avg) // ��պ��� ũ�� count++
            count++;
    }
    return count;
}

double AvgRate(int n, int count) // �Ű������� ��ü �л����� ��� �Ѵ� �л����� ����
{
    double avgRate = 0;
    avgRate = ((double)count / n) * 100;
    return avgRate;
}