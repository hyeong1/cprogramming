#include <stdio.h>

int main() {
    int inputData;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &inputData);

    for (int i = 1;i <= inputData;i++) {
        for (int j = 1;j < i;j++) {
            printf("%d", j);
        }
        printf("%d\n", i);
    }

    return 0;
}