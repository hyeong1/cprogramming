// ȸ�� ��޿� ���� ���� ����ϱ�
// switch-case�� ���
// 3���: ����/����/�б�, 2���: ����/�б�, 1���: �б�
#include <stdio.h>

int main() {
    int class;
    printf("����� ȸ������� �Է����ּ���: ");
    scanf("%d", &class);

    switch (class) // �Ǵ��� ��
    {
    case 1: // �Ǵ��� ���� 1�̸� case1 ����-> case2 ����-> case3 ���� ������ break;�� �����Ƿ� case1�� �����ϰ� ����.
        printf("�б� ���� �ο�\n");
        break;
    case 2:
        printf("���� ���� �ο�\n�б� ���� �ο�\n");
        break;
    case 3:
        printf("���� ���� �ο�\n���� ���� �ο�\n�б� ���� �ο�\n");
        break;
    
    default:
        break;
    }

    return 0;
}