// 1���� �Է¹��� ������ �Ҽ��� ����ϱ�
// �Ҽ�: ����� 1�� �ڱ��ڽŸ� ������ ��
#include <stdio.h>

int main() {
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    for (int i = 1;i <= num;i++) {
        int check = 0; // �Ҽ����� Ȯ�� �� ���� ����
        // �Ҽ� ã��
        for (int j = 1;j <= i;j++) { 
            if (i % j == 0) // i�� 1���� i���� ���� --> �������� 0�̸� check�� 1�� ����
                check += 1;
        }
        if (check == 2) // check�� 2���� ����� 2���̹Ƿ� �Ҽ�
            printf("%d\n", i);
    }

    return 0;
}