#include <stdio.h>

// ������ ���� �Է¹޾Ƽ� ���̸�ŭ *����ϱ�
int main() {
    int len;

    while (1) {
        printf("\n������ ���� (����: -1): ");
        scanf("%d", &len);

        for (int i = 1;i <= len;i++)
           printf("*");
        if (len == -1)
            break;  
    } 
    return 0;
}