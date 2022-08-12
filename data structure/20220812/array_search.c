// 1~20 사이의 난수로 초기화한 배열 내의 데이터에서 사용자가 지정한 정수를 검색
// 배열 내 저장된 위치를 출력
// 5회 반복 검색

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 배열 요소 출력하는 함수
void printArray(int *array, int count);

int main() {
    int num[10]; //0~9크기의 배열
    int count = 10; // 배열 크기를 저장하는 변수
    srand(time(NULL));

    // num배열 안에 난수 넣기
    for (int i = 0;i < 10;i++)
        num[i] = rand() % 20 + 1;

    printArray(num, count);

    // 배열 내용 검색 -5회 반복
    int search; // 검색할 정수를 저정하는 변수 선언
    for (int i = 0;i < 5;i++) {
        printf("검색할 정수를 입력하시오: ");
        scanf("%d", &search);
    
        for (int i = 0;i < count;i++) {
            if (search == num[i]) {
                printf("%d은(는) %d번 방에 있습니다.\n", search, i);
                break;
            }
            else if (i == 9)
                printf("%d은(는) 존재하지 않습니다.\n", search);
        }
    }
    
    return 0;
}

// 배열 요소 출력하는 함수
void printArray(int *array, int count) {
    printf("배열 내용: ");

    for (int i = 0;i < 10;i++)
        printf("%d\t", array[i]);
    printf("\n");
}