#include <stdio.h>

// Ű, ü�� �Է¹ް� ǥ�� ü�� ��� �Ŀ� ������� ü�� ��ü������ ǥ������ �Ǵ�
int main() {
    int height, weight;
    double standard;
    printf("ü�߰� Ű�� �Է��ϼ���: ");
    scanf("%d %d", &height, &weight);

    standard = (height - 100) * 0.9;
    
    /*
    if (weight == standard) {
        printf("ǥ���Դϴ�.\n");
    }
    else {
        if (weight < standard) {
            printf("��ü���Դϴ�.\n");
        }
        else {
            // weight > standard
            printf("��ü���Դϴ�.\n");
        }
    }
    */

    if (weight == standard) {
        printf("ǥ���Դϴ�.\n");
    }
    else if (weight < standard) {
        printf("��ü���Դϴ�.\n");
    }
    else {
        printf("��ü���Դϴ�.\n");
    }

    return 0;
} 