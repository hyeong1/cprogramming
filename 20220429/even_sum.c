#include <stdio.h>

int main() {
    int input, sum;
    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d", &input);

    sum = 0;
    for (int i = 1;i <= input;i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("¦���� ���� %d�Դϴ�.", sum);

    return 0;
}