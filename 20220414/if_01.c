#include <stdio.h>

int main() {
    int dice1, dice2, dice3, money;
    printf("���: ");
    scanf("%d %d %d", &dice1, &dice2, &dice3);

    // 1. ��� ���� ��
    // 2. ���� �� 2�� ,2-1. ù ��° == �� ��°, 2-2. ù ��° == �� ��°, 2-3. �� ��° == �� ��°
    // 3. ��� �ٸ� ��, 3-1 ù ��°�� ���� ū ��, 3-2 �� ��°�� ���� ū ��, 3-3 �� ��°�� ���� ū ��

    //1
    if (dice1 == dice2 && dice1 == dice3) {
        money = 10000 + dice1 * 1000;
        printf("%d\n", money);
    }
    //2 -��� ������ ����
    else if (dice1 == dice2 && dice1 != dice3) {  //2-1
        money = 1000 + dice1 * 100;
        printf("%d\n", money);
    }
    else if (dice1 == dice3 && dice1 != dice2) {  //2-2
        money = 1000 + dice1 * 100;
        printf("%d\n", money);
    }
    else if (dice2 == dice3 && dice2 != dice1) {  //2-3
        money = 1000 + dice2 * 100;
        printf("%d\n", money);
    }
    //3 -�� �ٸ�
    else {
        if (dice1 > dice2 && dice1 > dice3) {       //3-1 dice1�� ���� Ŭ ��
            money = dice1 * 100;
            printf("%d\n", money);
        }
        else if (dice2 > dice1 && dice2 > dice3) {  //3-2 dice2�� ���� Ŭ ��
            money = dice2 * 100;
            printf("%d\n", money);
        }
        else {   //3-3 dice3�� ���� Ŭ ��
            money = dice3 * 100;
            printf("%d\n", money);
        }
    }

    return 0;
}