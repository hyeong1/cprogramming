#include <stdio.h>

int main() {
    int i, j, base, height;
    printf("����, ���� �Է�: ");
    scanf("%d %d", &base, &height);

    for (i = 0;i < height;i++) {
        // ���ΰ� 4�̸� 
        // i == 0, 1, 2, 3 --> 4��
        for (j = 0;j < base - 1;j++) {
            // ���ΰ� 3�̸�
            // j == 0, 1, 2 --> 3��
            // 3���ε� �ۿ��� �ϳ� �����ϱ� -1 --> �ȿ����� 2���� ���
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}