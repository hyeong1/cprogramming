#include <stdio.h>

int main() {
    int price, total;
    double discount;
    
    printf("총 구매액을 입력해주세요: ");
    scanf("%d", &price);

    if (price >= 100000) {
        discount = 0.8;
        total = price * discount;
        printf("최종 결제액은 %d원입니다.\n", total);
    }
    else if (price >= 50000) {
        discount = 0.9;
        total = price * discount;
        printf("최종 결제액은 %d원입니다.\n", total);
    }
    else if (price >= 10000) {
        discount = 0.95;
        total = price * discount;
        printf("최종 결제액은 %d원입니다.\n", total);
    }
    else {
        printf("최종 결제액은 %d원입니다.\n", price);
        printf("10000원 이상 구매 시 할인되니 많이 사주세요*^^*\n");
    }

    return 0;
}