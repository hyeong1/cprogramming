#include <stdio.h>

int main() {
    int data, num;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &data);

    printf("2�� ���ϰ� ���� Ƚ��: ");
    scanf("%d", &num);

    printf("%d<<%d�� ��: %d", data, num, data << num);

    return 0;
}