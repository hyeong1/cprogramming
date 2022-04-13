#include <stdio.h>

int main()
{
    // 두 수 입력받고 크기비교
    // 큰 수 - 작은 수 출력
    // 같으면 같다고 출력

    int num1, num2;
    printf("정수 두 개를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2){
        printf("두 수는 같습니다.");
    }
    else if (num1 > num2){
        printf("%d", num1 - num2);
    }
    else{
        printf("%d", num2 - num1);
    }
    

    return 0;
}