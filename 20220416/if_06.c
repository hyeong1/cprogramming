#include <stdio.h>

int main() {
    // �б� 1, 2, 3, 4, 5 - �б����� ���� 8��, �ݸ��� �л��� 30��
    // 1�б� 7�� 17���̸� ����ȿ
    // 2�б� 1�� 22���̸� ����ũ
    // 3�б� 3�� 3���̸� ����
    // 4�б� 1�� 11���̸� �����
    // 5�б� 8�� 15���̸� ������
    // �� ������ �ƴ� �ٸ� �б�, ��, ��ȣ�� '�𸣴� ����Դϴ�.' ���

    int schoolSize, classSize, numberSize;
    printf("�б�, ��, ��ȣ: ");
    scanf("%d %d %d", &schoolSize, &classSize, &numberSize);

    // 1�б�
    if (schoolSize == 1){
        if (classSize == 7) {
            if (numberSize == 17) {
                printf("����ȿ");
            }
            else {
            printf("�𸣴� ����Դϴ�.");
        }
        }
        else {
            printf("�𸣴� ����Դϴ�.");
        }
    }
    // 2�б�
    else if (schoolSize == 2) {
        if (classSize == 1) {
            if (numberSize == 22) {
                printf("����ũ");
            }
            else {
            printf("�𸣴� ����Դϴ�.");
        }
        }
        else {
            printf("�𸣴� ����Դϴ�.");
        }
    }
    // 3�б�
    else if (schoolSize == 3) {
        if (classSize == 3) {
            if (numberSize == 3) {
                printf("����");
            }
            else {
            printf("�𸣴� ����Դϴ�.");
        }
        }
        else {
            printf("�𸣴� ����Դϴ�.");
        }
    }
    // 4�б�
    else if (schoolSize == 4) {
        if (classSize == 1) {
            if (numberSize == 11) {
                printf("�����");
            }
            else {
            printf("�𸣴� ����Դϴ�.");
        }
        }
        else {
            printf("�𸣴� ����Դϴ�.");
        }
    }
    //5�б�
    else {
        if (classSize == 8) {
            if (numberSize == 15) {
                printf("������");
            }
            else {
            printf("�𸣴� ����Դϴ�.");
        }
        }
        else {
            printf("�𸣴� ����Դϴ�.");
        }
    }

    return 0;
}