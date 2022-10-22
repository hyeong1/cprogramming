// 1부터 10까지의 정수에 대하여 제곱값과 세제곱값을 계산하여 출력
// 10*3 크기의 2차언 배열에 첫 번째 열-정수, 두 번째 열-제곲값, 세 번째 열-세제곱값 저장
// 추가로 사용자에게 세제곱값을 받아 해당 세제곱근을 출력
#include <stdio.h>

void PrintArr(int (*arr)[3]);     // 배열 출력 함수(잘 들어갔는지 확인)
void InsertArr(int (*arr)[3]);    // 2차원 배열 안을 채우는 함수
void SearchSquare(int (*arr)[3]); // 사용자에게 세제곱값을 받아서 해당 세제곱근을 출력하는 함수

int main()
{
    int square[10][3];

    InsertArr(square);
    PrintArr(square);
    SearchSquare(square);

    return 0;
}

void PrintArr(int (*arr)[3])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
}

void InsertArr(int (*arr)[3])
{
    int input = 1;               // 배열에 들어갈 요소 변수
    for (int i = 0; i < 10; i++) // 첫 번째 열-정수 넣기
    {
        arr[i][0] = input;
        input++;
    }
    for (int i = 0; i < 10; i++)
    {
        arr[i][1] = arr[i][0] * arr[i][0];             // 두 번째 열에는 첫 번쨰 열 값의 제곱값 넣기
        arr[i][2] = arr[i][0] * arr[i][0] * arr[i][0]; // 세 번째 열에는 첫 번쨰 열 값의 세제곱값 넣기
    }
}

void SearchSquare(int (*arr)[3])
{
    int search;
    printf("정수를 입력하시오: ");
    scanf("%d", &search);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i][2] == search)
            printf("%d의 세제곱근은 %d\n", search, i + 1);
    }
}