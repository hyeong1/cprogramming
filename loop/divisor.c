//����ڰ� �Է��� ������ ��� ����� ȭ�鿡 ���
#include <stdio.h>

int inputNum(); // ���� �Է¹޴� �Լ�
void findDivisor(int num); // ��� ����ϴ� �Լ�

int main() {
    int num = inputNum();

    printf("���: ");
    findDivisor(num);
    printf("\n");

    return 0;
}

int inputNum() {
    int num;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    return num;
}

void findDivisor(int num) {
    for (int i = 1;i <= num;i++) {
        if (num % i == 0)
            printf("%d ", i);
    }
}