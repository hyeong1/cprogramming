// �Է��� ���ڿ��� ȸ������ �˻��ϴ� ���α׷�
// Ƚ�� ���� ����. ��, 'end'�Է� �� ���α׷� ����
// �Է��Լ��� ȸ���˻��Լ� ���� ��
#include <stdio.h>
#include <string.h>

void inputData(char *ap); 
int checkStr(char *ap);

int main() {
    char inputStr[100];
    int result; // ȸ�� �˻����� �����ϴ� ����

    // ȸ���˻� �ݺ���
    while (1) {
        inputData(inputStr);

        // �Է¹��� ���ڿ��� 'end'���� �˻�
        char checkEnd = strcmp(inputStr, "end");
        if (!checkEnd) // checkEnd == 0
            break;
        else {
            result = checkStr(inputStr);
            if (!result) //result���� 0�̸� ȸ�� ����
                printf("ȸ�� ����\n");
            else  // result ���� 0�� �ƴϸ� ȸ�� �ƴ�
                printf("ȸ�� �ƴ�\n");
        }    
    }

    return 0;
}

// �Է��Լ�
void inputData(char *ap) {
    printf("�ܾ� �Է�: ");
    scanf("%s", ap);
    /*
    // �Է��� ���ڿ� ���� ���ϱ�
    int n = strlen(str);
    
    // �Է��� ���ڿ��� inputStr ���ڿ��� �ֱ�
    for (int i = 0;i <= n;i++)
        ap[i] = str[i];
    */
   return;
}
// ȸ���˻��Լ�
int checkStr(char *ap) {
    int len = strlen(ap); // inputStr�� �� ���̸� �����ϴ� ����
    int check = 0; // ȸ�� �ƴϸ� +1
    for (int i = 0;i <= len / 2;i++) {
        if (ap[i] != ap[len-1-i]) {
            check += 1;
            break;
        } 
    }
    return check;
}