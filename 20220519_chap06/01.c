#include <stdio.h>

// Ű���忡�� �ϳ��� ���ڸ� �о� ������������ ����-switch�� �̿�
int main() {
    char data;
    printf("���ڸ� �Է��Ͻÿ�: ");
    data = getchar();

    switch (data)
    {
    case 'a':
        printf("�����Դϴ�.\n");
        break;
    case 'e':
        printf("�����Դϴ�.\n");
        break;
    case 'i':
        printf("�����Դϴ�.\n");
        break;
    case 'o':
        printf("�����Դϴ�.\n");
        break;
    case 'u':
        printf("�����Դϴ�.\n");
        break;
    default:
        break;
    }

    return 0;
}