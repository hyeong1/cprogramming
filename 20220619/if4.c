#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int com, user;
    srand(time(NULL));
    com = rand() % 3 + 1;

    printf("�����Ͻÿ�(1:���� 2:���� 3:��)");
    scanf("%d", &user);

    printf("%d\n", com);

    if (user == 1) {
        if (com == 1)
            printf("���\n");
        else if (com == 2) 
            printf("����ڰ� �̱�\n");
        else 
            printf("����ڰ� �̱�\n");
    }
    else if (user == 2) {
        if (com == 1)
            printf("����ڰ� �̱�\n");
        else if (com == 2) 
            printf("���\n");
        else 
            printf("����ڰ� ��\n");
    }
    else {
        if (com == 1)
            printf("����ڰ� ��\n");
        else if (com == 2) 
            printf("����ڰ� �̱�\n");
        else 
            printf("���\n");
    }

    return 0;
}