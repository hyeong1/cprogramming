#include <stdio.h>

// ����ڰ� �Է��� ������ ��� ��� ���
int main() {
    int data;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &data);

    printf("���: ");
    for (int i = 1;i <= data;i++) {
        if (data % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}