#include <stdio.h>

int main() 
{
    int startH, startM, ovenTime, endH, endM;
    printf("");
    scanf("%d %d\n%d", &startH, &startM, &ovenTime);
    
    // startM + ovenTime == endM

    // startM + ovenTime < 60 60���� �ȳѾ ��
    if (startM + ovenTime < 60) {
        endH = startH;
        endM = startM + ovenTime;
        printf("%d %d", endH, endM);
    }
    // startM + ovenTime >= 60 60�� �Ѿ �� 
    else {
        // startM + ovenTime == �� 60��
        if (startM + ovenTime == 60) {
            endH = startH + 1;
            printf("%d %d", endH, endM - 60);  // �п��� 60���� ���
        }
        // startM + ovenTime > 60���� ŭ
        else if (startM + ovenTime > 60) {
            endH = startH + 1;    // +1�ð�
            endM = startM + ovenTime;  
            // endM�� 120�� ��
            if (endM < 120) {
                endH = endH + 1;  // +1�ð�
                printf("%d %d", endH, endM - 60);   // 120���� �̹Ƿ� �п��� 60���� ���
            }
            // endM�� 120���̰ų� �� ũ�� 180�� ������ ��
            else if (endM < 180) {
                endH = endH + 1;
                printf("%d %d", endH, endM - 120);   // 120���� �Ѱ� 180�� ���̹Ƿ� �п��� 60���� ���
            }
            // endM�� 180�к��� Ŭ ��
            else {
                endH = endH + 2;
                printf("%d %d", endH, endM - 180);   // 180���� �����Ƿ� �п��� 60���� ���
            }
        }
    }

    return 0;
}