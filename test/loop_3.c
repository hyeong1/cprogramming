// 0 보다 크거나 같고, 99 보다 작거나 같은 정수가 주어질 때
// 먼저 주어진 수가 10 보다 작다면 앞에 0을 붙여 두 자리 수로 만들고, 각 자리의 숫자를 더한다.
// 그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙인다.
// 예)26 -> 다시 26으로 돌아오는데 사이클 4번 
// 사이클의 길이를 구하는 프로그램을 작성하시오
#include <stdio.h>

int main()
{
    int N, n,sumN, newN, cycle; // 초기 값은 N에 저장, 연산할 변수는 n
    sumN = 0;  // 각 자리 숫자 더한 값 저장 변수
    newN = 0;  // 새로운 수 저장 변수
    cycle = 0; // 사이클 길이 세는 변수

    printf("정수 입력: ");
    scanf("%d", &N);

    n = N; // n으로 연산하고 N으로 비교

    do
    {
        
        if (n < 10) // N이 10보다 작은 경우
        {
            sumN = 0 + n;
            newN = (n * 10) + sumN;
            //printf("%d %d\n", n, sumN);
            cycle++;
        }
        else // N이 10보다 큰 경우
        {
            sumN = (n / 10) + (n % 10);
            newN = ((n % 10) * 10) + (sumN % 10);
            //printf("%d %d %d\n", n, sumN, newN);
            cycle++;
        }
        n = newN;
    } while(newN != N);
    

    printf("%d\n", cycle);

    return 0;
}