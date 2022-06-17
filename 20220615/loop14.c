#include <stdio.h>

// 정수를 입력받아 자리수를 반대로 출력하는 프로그램
int main() {
    int input;
    printf("정수를 입력하시오: ");
    scanf("%d", &input);

    /*do  --> 일단 실행하고 while조건 확인 -> 참이면 다시 반복 거짓이면 멈춤
    {
        printf("%d%d", input % 10, input / 10);
        break;
    } while (input >= 10);

    do
    {
        printf("%d%d%d", input % 100, (input / 10) % 10, input / 100);
        break;
    } while (input >= 100);

    do
    {
        
    } while (input >= 1000);*/

    while (1) {
        if (input >= 10 && input < 100) {
            printf("%d%d", input % 10, input / 10);
            break;
        }
        else if (input >= 100 && input < 1000) {
            printf("%d%d%d", input % 100, (input / 10) % 10, input / 100);
            break;
        }
    }
    
    
    

    return 0;
}