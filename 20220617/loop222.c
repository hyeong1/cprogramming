#include <stdio.h>

// �ﰢ�� 5, 45, 345, 2345, 12345 ���
int main() {
    int len;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &len);

    for (int i = 0;i < len;i++) {
        for (int j = 0;j < len - i;j++) 
            printf(" ");
        for (int j = len - i;j <= len;j++) 
            printf("%d", j);
        printf("\n");
    }

    return 0;
}