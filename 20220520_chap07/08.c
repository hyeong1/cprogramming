#include <stdio.h>

// ���� �Է¹޾Ƽ� ���ڸ�ŭ ��ǥ ���
int main() {
    int num;
    printf("������ ����(����:-1): ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {   
        if (num == -1) {
            break;
        }
        printf("*");
    }

    return 0;
}