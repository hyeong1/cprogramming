// ���� �߿��� �ִ� M�� ���� ��� ������ (���� / M * 100) ��ħ
// ������ �� ������� ���� ������� ��, ���ο� ����� ���Ͻÿ�
// ù° �ٿ� ���� �� ������ ���� N, ���� �ٿ� ���� �Է�
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    double sum = 0; // ��� ���� ���� �� ����
    scanf("%d", &N);
    double* score = (double*)malloc(sizeof(double) * N);
    
    for (int i = 0;i < N;i++) // ���� �Է�
        scanf("%lf", &score[i]);

    M = score[0];
    for (int i = 1;i < N;i++) // �ִ� ���� ã��
    {
        if (M < score[i])
            M = score[i];
    }

    for (int i = 0;i < N;i++) // ���� ���� ����ϱ�
        score[i] = score[i] / M * 100;

    for (int i = 0;i < N;i++) // ���ο� ������ ���� ���� �� ���
        sum += score[i];
    printf("%lf", sum / N); // ���ο� ���� ��� ���

    return 0;
}