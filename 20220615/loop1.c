#include <stdio.h>

int main() {
    int count;
    printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
    scanf("%d", &count);

    for (int i = count;i > 0;i--) {
        printf("%d ", i);
    }

    return 0;
}