#include <stdio.h>

// 2와 100 사이에 있는 모든 소수 찾기
int main() {
    for (int i = 2;i <= 100;i++) { // 2부터 100까지 반복
        int count = 0;             // 약수의 개수 확인할 변수 초기화
        for (int j = 1;j <= i;j++) { 
            if (i % j == 0)        // i를 1부터 i까지 나눠서 나머지가 0이 될 때만 count+1
                count += 1;
        }
        if (count == 2)            // 안쪽 반복문 나와서 약수의 개수가 2개 인 것만 출력하기
            printf("%d ", i);
    }

    return 0;
}