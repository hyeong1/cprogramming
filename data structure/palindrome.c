// �Է��� ���ڿ��� ȸ������ �˻��ϴ� ���α׷�
// Ƚ�� ���� ����. ��, 'end'�Է� �� ���α׷� ����
// �Է��Լ��� ȸ���˻��Լ� ���� ��
#include <stdio.h>
#include <string.h>

void inputData(char *ap); 
void checkStr(char *ap);

int main() {
    char inputStr[100];
    inputData(inputStr);
    
    // ȸ���˻� �ݺ���
    while (1) {
        // �Է¹��� ���ڿ��� 'end'���� �˻�
        char checkEnd = strcmp(inputStr, "end");
        if (!checkEnd)
            break;
        else
            checkStr(inputStr);
            break;
    }

    return 0;
}

// �Է��Լ�
void inputData(char *ap) {
    char str[100];
    printf("�ܾ� �Է�: ");
    scanf("%s", str);
    
    // �Է��� ���ڿ� ���� ���ϱ�
    int n = strlen(str);
    
    // �Է��� ���ڿ��� inputStr ���ڿ��� �ֱ�
    for (int i = 0;i <= n;i++)
        ap[i] = str[i];
}
// ȸ���˻��Լ�
void checkStr(char *ap) {
    // inputStr�� �� ���̸� �����ϴ� ����
    int len = strlen(ap);
    // ȸ�� �ƴϸ� +1
    int check = 0;
    for (int i = 0;i <= len / 2;i++) {
        if (ap[i] == ap[len-1]) {
            len -= 1;
        }
        else {
            printf("ȸ�� �ƴ�\n");
            check += 1;
            break;
        }
    }
    // �ݺ����� �� �������� ȸ��. check == 0�̸� 'ȸ�� ����' ���
    if (!check)
        printf("ȸ�� ����\n");
}