#include <stdio.h>

// �ִ����� ���ϴ� ���α׷�
int main() {
    int x, y, result;
    printf("�� ������ �Է��Ͻÿ�(ū��, ������): ");
    scanf("%d %d", &x, &y);

    for (int i = 1;i <= x;i++) {
        if (x % i == 0 && y % i == 0)
            result = i;
    }

    printf("�ִ� ������� %d�Դϴ�.\n", result);

    return 0;
}