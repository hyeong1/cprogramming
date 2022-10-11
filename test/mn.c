#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m, n, index, minSum, min, square[100] = {0}; // 완전제곱근 저장할 배열(1부터 10000사이에 완전제곱수 100개이므로 배열 크기는 100)
    scanf("%d %d", &m, &n);
    index = 0;
    minSum = 0;

    for (int i = m;i <= n;i++)
    {
        if (sqrt(i) == (int)sqrt(i)) // 제곱근이랑 제곱근의 정수형이랑 같으면
        {
            square[index] = i; // 완전제곱수 저장할 배열에 해당 수 저장
            index++; 
        }
    }
    // 완전제곱수 없으면 -1 출력
    if (square[0] == 0)
        printf("-1");
    else
    {
        // 완전제곱수 모두 더해서 더한 값 출력
        for (int i = 0;i < 100;i++)
            minSum += square[i];
        printf("%d\n", minSum);

        // 완전제곱수 중 최소값 찾기
        min = square[0];
        for (int i = 1;i < 100;i++)
        {
            if (square[i] != 0 && min > square[i])
                min = square[i];
        }
        printf("%d", min);
    }
    return 0;
}