#include <stdio.h>

int main() {
    int time;
    printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
    scanf("%d", &time);

    for (int i = time;i > 0;i--) {
        printf("%d ", i);
    }

    return 0;
}