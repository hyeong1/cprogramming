// 소수 찾기 - 함수로 구현
// 약수를 1과 자기자신만 가지면 소수
#include <stdio.h>

void FindPrimeNum(int num)
{
    int check = 0;
    for (int i = 1; i < num; i++) // num을 1부터 num-1까지 나눠볼 것임
    {
        if (num % i == 0)
            check++;
        if (check > 1) // check가 1 이상이면 (--> 1이외에 나눠지는 수가 있다는 것이므로)
        {
            printf("소수 아님\n");
            break; // '소수 아님' 출력하고 반복문 나가기
        }
    }
    if (!check) // check가 0이면 반복문을 돌지 않았다는 것 -> 입력값이 1이라는 뜻
        printf("소수 아님\n");
    else if (check == 1) // 1부터 나눴으니까 check는 무조건 1 이상
        printf("소수 맞음\n");
}

int main()
{
    int num;
    scanf("%d", &num); // 사용자에게 숫자 입력받기
    FindPrimeNum(num);
    return 0;
}