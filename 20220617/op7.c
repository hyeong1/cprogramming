#include <stdio.h>

int main() {
    int num, times, result;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);
    printf("2�� ���ϰ� ���� Ƚ��: ");
    scanf("%d", &times);

    printf("%d", num << times);

    return 0;
}