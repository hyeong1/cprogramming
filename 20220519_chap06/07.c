#include <stdio.h>

// 키, 체중 입력받고 표준 체중 계산 후에 사용자의 체중 저체중인지 표준인지 판단
int main() {
    int height, weight;
    double standard;
    printf("체중과 키를 입력하세요: ");
    scanf("%d %d", &height, &weight);

    standard = (height - 100) * 0.9;
    
    /*
    if (weight == standard) {
        printf("표준입니다.\n");
    }
    else {
        if (weight < standard) {
            printf("저체중입니다.\n");
        }
        else {
            // weight > standard
            printf("과체중입니다.\n");
        }
    }
    */

    if (weight == standard) {
        printf("표준입니다.\n");
    }
    else if (weight < standard) {
        printf("저체중입니다.\n");
    }
    else {
        printf("과체중입니다.\n");
    }

    return 0;
} 