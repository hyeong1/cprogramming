#include <stdio.h>

// 정수 3개 크기비교 
int main() {
    int num1, num2, num3;
    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //(num1 > num2 && num1 > num3) ? printf("%d\n", num1) : printf("");
    //(num2 > num1 && num2 > num3) ? printf("%d\n", num2) : printf("");
    //(num3 > num1 && num3 > num2) ? printf("%d\n", num3) : printf("");

    if (num1 > num2 && num1 > num3)
        printf("%d", num1);
    else if (num2 > num1 && num2 > num3)
        printf("%d", num2);
    else    
        printf("%d", num3); 

    return 0;
}