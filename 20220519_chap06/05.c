#include <stdio.h>

// ���̰��� �ѷ��ڽ���-Ű�� 140�̻�, ���̰� 10���̻��̸� Ÿ�� �����ϴ�.
int main() {
    int height, age;
    printf("Ű�� �Է��Ͻÿ�(cm): ");
    scanf("%d", &height);

    printf("���̸� �Է��Ͻÿ�: ");
    scanf("%d", &age);

    if ((height >= 140) && (age >= 10)) {
        printf("Ÿ�� �����ϴ�.\n");
    }
    else {
        printf("�˼��մϴ�.\n");
    }

    return 0;
}