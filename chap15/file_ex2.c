// ���� ����� ����
// ����ڰ� �Է��ϴ� �л����� ������ �ؽ�Ʈ���Ͽ� ����
// �л����� ������ ����� ����ؼ� ȭ�鿡 ���
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char fname[100];
    int number, count = 0;
    char name[20];
    double score, total = 0.0;

    printf("���� ���� �̸��� �Է��Ͻÿ�: ");
    scanf("%s", fname);

    // ���� ������ ���� ���� ����
    if ((fp = fopen(fname, "w")) == NULL)
    {
        fprintf(stderr, "���� ���� %s��/�� �� �� �����ϴ�.\n", fname);
        exit(1);
    }

    // ����ڷκ��� �й�, �̸�, ���� �Է¹޾Ƽ� ���Ͽ� ����
    while(1)
    {
        printf("�й�, �̸�, ������ �Է��Ͻÿ�(�����̸� ����): ");
        scanf("%d", &number);
        if (number < 0) break;
        scanf("%s %lf", name, &score);
        fprintf(fp, "%d %s %lf\n", number, name, score);
    }
    fclose(fp);

    // ���� ���� �б� ���� ����
    if ((fp = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "���� ���� %s��/�� �� �� �����ϴ�.\n", fname);
        exit(1);
    }

    // ���Ͽ��� ������ �о� ��� ���ϱ�
    while (!feof(fp))
    {
        fscanf(fp, "%d %s %lf", &number, name, &score);
        total += score;
        count++;
    }

    printf("��� = %lf\n", total/count);
    fclose(fp);

    return 0;
}