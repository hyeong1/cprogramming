// 1부터 입력받은 수까지 소수만 출력하기
// 소수: 약수를 1과 자기자신만 가지는 수
#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    for (int i = 1;i <= num;i++) {
        int check = 0; // 소수인지 확인 할 변수 선언
        // 소수 찾기
        for (int j = 1;j <= i;j++) { 
            if (i % j == 0) // i를 1부터 i까지 나눔 --> 나머지가 0이면 check에 1을 더함
                check += 1;
        }
        if (check == 2) // check가 2개면 약수가 2개이므로 소수
            printf("%d\n", i);
    }

    return 0;
}