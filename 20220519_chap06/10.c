#include <stdio.h>

// ��ǥ �Է¹޾Ƽ� �ش� ��ǥ�� ���ϴ� ��и��� ȭ�鿡 ���
int main() {
    int x, y;
    printf("��ǥ(x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0) {
        // 1, 4��и�
        if (y > 0) {
            printf("1��и�\n");
        }
        else {
            printf("4��и�\n");
        }
    }
    else {
        // 2, 3��и�
        if (y > 0) {
            printf("2��и�\n");
        }
        else {
            printf("3��и�\n");
        }
    }

    return 0;
}