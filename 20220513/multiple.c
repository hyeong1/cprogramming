#include <stdio.h>

int main() {
    int i;
    int sum = 0;
    for (i = 0;i < 200;i++) {
        if((i % 3 == 0) && (i % 4 == 0)) {
            sum += i;
            if (sum > 1000) {
                break;
            }
        }
    }
    printf("�������� ��: %d\n", i);
    printf("���� ��: %d\n", sum);

    return 0;
}