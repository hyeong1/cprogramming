// ù° �ٿ� �׽�Ʈ ���̽� ���� C�Է�
// ��° �ٺ��� �� �׽�Ʈ ���̽� ���� �л��� ��N, �̾ N���� �� �Է�
// �� ���̽� ���� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ���
#include <stdio.h>
#include <stdlib.h>

void InputScore(double *arr, int n);


int main()
{
    int c, n, count; // �׽�Ʈ ���̽� ����, �л� ��, ��� �Ѵ� �л� üũ ����
    double *score; // ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� ����
    double avg, avgRate; // ��� ����, ����� �Ѵ� �л����� ���� ����
    scanf("%d\n", &c); // �׽�Ʈ ���̽� ���� �Է�
    avg = 0;
    count = 0;
    avgRate = 0;

    for (int i = 0;i < c;i++)
    {
        scanf("%d", &n); // �л� �� �Է�
        score = (double*)malloc(sizeof(double) * n);

        InputScore(score, n); // ���� �Է�
        for (int i = 0;i < n;i++)
            printf("%lf ", score[i]);
        printf("\n");
        // ���̽� ���� ����� �Ѵ� ���� ���
        // ��� ���ϱ�
        for (int i = 0;i < n;i++)
            avg += score[i];
        avg = avg / n;
        printf("���: %lf\n", avg);

        // ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ���
        // ��� �Ѵ� �л� �� ���ϱ�
        for (int i = 0;i < n;i++) // �������� ��հ� ���ϸ鼭 
        {
            if (score[i] > avg) // ��պ��� ũ�� count++
                count++;
        }
        // ���� ���ϱ�
        avgRate = ((double)count / n) * 100; // ������ (��� �Ѵ� �л� �� / ��ü �л���) * 100
        // ���� �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ���
        printf("%.3lf\n", avgRate);
        // ���� ���̽� ����� ���� ��� ����, ���� ����, ��� �Ѵ� �л� �� ���� 0���� �ʱ�ȭ����
        avg = 0;
        avgRate = 0;
        count = 0;
    }   
     
    return 0;
}

void InputScore(double *arr, int n)
{
    for (int i = 0;i < n;i++)
        scanf("%lf", &arr[i]);   
}