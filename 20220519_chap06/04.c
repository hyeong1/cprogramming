#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

// ��ǻ�Ϳ� ���������� ����
int main() {
    srand(time(NULL));

    int userNum, comNum;
    comNum = rand() % 3 + 1;
    printf("��ǻ�� ����: %d\n", comNum);
    
    printf("�����Ͻÿ�.(1:���� 2:���� 3:��)");
    scanf("%d", &userNum);

    if (userNum == comNum) {
        printf("���\n");
    }
    else {
        // userNum != comNum
        if (userNum == 1) {
            // userNum == 1����
            if (comNum == 2) {
                // comNum == 2����
                printf("����ڰ� ����\n");
            }
            else {
                // comNum == 3��
                printf("����ڰ� �̰���\n");
            }
        }
        else if (userNum == 2) {
            // userNum == 2����
            if (comNum == 1) {
                // comNum == 1����
                printf("����ڰ� �̰���\n");
            }
            else {
                // comNum == 3��
                printf("����ڰ� ����\n");
            }
        }
        else {
            // userNum == 3��
            if (comNum == 1) {
                // comNum == 1����
                printf("����ڰ� ����\n");
            }
            else {
                // comNum == 2����
                printf("����ڰ� �̰���\n");
            }
        } 
    }

    return 0;
}