#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ��ǻ�Ͱ� ���Ƿ� ���� 1���� 20������ ���� ã�� ���α׷�
int main() {
    int com, guess, tries;
    srand(time(NULL));
    com = rand() % 20 + 1;

    tries = 0;

    do {
        printf("1���� 20������ ���� ���߾� ������ ");
        scanf("%d", &guess);
        tries++;

        if (guess > com)
            printf("������ ������ �����ϴ�.\n");
        if (guess < com) 
            printf("������ ������ �����ϴ�.\n");

    } while (guess != com);

    printf("�����Դϴ�. �õ�Ƚ��: %d\n", tries);

    return 0;
}