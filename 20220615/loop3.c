#include <stdio.h>

int main() {
    int num;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    printf("���: ");
    for (int i = 1;i <= num;i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}