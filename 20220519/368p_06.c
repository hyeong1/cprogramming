#include <stdio.h>

int even(int n) {
    if (n % 2 == 0) {
        printf("¦��");
    }
    else {
        printf("Ȧ��");
    }
}

int absolute(int n) {
    if (n < 0) {
        printf("%d", -n);
    }
    else {
        printf("%d", n);
    }
}

int sign(int n) {
    if (n < 0) {
        printf("����");
    }
    else if (n > 0) {
        printf("���");
    }
    else {
        printf("0");
    }
}

int main() {
    int num;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    printf("even()�� ���: ");
    even(num);

    printf("\nabsolute()�� ���: ");
    absolute(num);

    printf("\nsign()�� ���: ");
    sign(num);

    return 0;
}