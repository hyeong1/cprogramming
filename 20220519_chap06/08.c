#include <stdio.h>

// ���̰����� �����̿���� ���� ���-���� �ð��� ���� �Է¹޾Ƽ� ��� ���
int main() {
    int time, age;
    printf("���� �ð��� ���̸� �Է��ϼ���: ");
    scanf("%d %d", &time, &age);

    if (time < 17) {
        if ((age >= 3 && age <= 12) || age >= 65) {
            printf("25,000\n");
        }
        else {
            printf("34,000\n");
        }
    }
    else {
        printf("10,000\n");
    }

    return 0;
}