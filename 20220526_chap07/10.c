#include <stdio.h>

int main() {
    double r, result = 1;
    int n;

    printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
    scanf("%lf", &r);
    printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);

    for (int i = 1;i <= n;i++) {
        result = result * r;
    }    

    printf("������� %lf", result);

    return 0;
}