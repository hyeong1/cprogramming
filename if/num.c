// �� ���� ������ �Է¹��� �Ŀ� ���� ���� ū ���� ������� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>

int main() {
    int num1, num2;
    printf("�� ���� ������ �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);

    // num1�� ū �� �� ��
    if (num1 > num2) {
        if (num1 % num2 == 0)
            printf("%d�� %d�� ����Դϴ�.\n", num2, num1);
    }
    // num2�� ū �� �� ��
    else {
        if (num2 % num1 == 0)
            printf("%d�� %d�� ����Դϴ�.\n", num1, num2);
    }

    return 0;
}