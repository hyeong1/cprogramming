#include <stdio.h>

// �Ǽ��� �ŵ� ������ ����ϴ� ���α׷�
int main() {
    double r, result;
    int n;
    printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
    scanf("%lf", &r);

    printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    result = 1;

    for (int i = 1;i <= n;i++) {
        result *= r;
    }

    printf("������� %lf", result);

    return 0;
}