#include <stdio.h>

// ī���� �ʱⰪ �Է� �ް� 1�� ���ҽ�Ű��-0�� �� ������ �ݺ�
int main() {
    int counter;
    printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
    scanf("%d", &counter);

    for (int i = counter;i > 0;i--) {
        printf("%d ", i);
    }

    return 0;
}