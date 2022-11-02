// 숫자 10개 입력받고, 이를 42로 나눈 나머지를 구한다.
// 그 다음 서로 다른 값이 몇 개 있는지 출력
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dataN = 10, check[42] = {0}, checkNum = 0; // 입력할 숫자 개수, 42로 나눈 나머지 배열, 서로 다른 나머지 개수 체크
    int *data = (int *)calloc(sizeof(int), dataN); // dataN 크기만큼 동적할당
    for (int i = 0; i < dataN; i++)
        scanf("%d", &data[i]); // dataN번 숫자 입력 받기

    for (int i = 0; i < dataN; i++)
    {
        *(data + i) %= 42; // 입력 받은 숫자의 42로 나눈 나머지 구하기
        check[*(data + i)]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (check[i] > 0) // 나머지 체크한 배열 요소에서 값이 0 이상이면
            checkNum++;   // 서로 다른 나머지 개수 체크하는 변수에 +1
    }

    printf("%d\n", checkNum);

    return 0;
}