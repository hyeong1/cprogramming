// �ݿø� ������ �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
#include <stdio.h>
/*
double round(double f);

int main()
{
    double input;    // �Է��� �� �����ϴ� ����
    int inputRound;  //�Է��� �� �ݿø� �� ��� ���� ���� ����

    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf", &input);

    inputRound = round(input);

    printf("�ݿø��� ���� %d�Դϴ�.\n", inputRound);

    return 0;
}

// �Ǽ��� ������ ��ȯ�Ͽ� �Ҽ��� ���ϴ� �߶� ���ְ� 0.5�� ���� �ݿø� ������ �����Ѵ�.
double round(double f)
{
    int doubleToInt = (int)(f + 0.5);
    return doubleToInt;
}*/
int round(double f)
{
    return (int)(f + 0.5);
}
int main()
{
    double num;
    scanf("%lf", &num);
    printf("�ݿø��� ���� %d�Դϴ�.\n", round(num));
    return 0;
}