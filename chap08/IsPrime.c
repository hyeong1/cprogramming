#include <stdio.h>

int IsPrime(int n)
{
    int check = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) // i가 n의 약수면
            check++;    // check 증가
        if (check > 1)  // 약수의 개수가 1 이상이면
            return 0;   // 0 반환
    }
    if (check) // check == 1이면
        return 1;
    else // check == 0이면도 포함
        return 0;
}

int main()
{
    for (int i = 2; i < 101; i++)
    {
        if (IsPrime(i)) // IsPrime(i) == 1 이면
            printf("%d ", i);
    }
    return 0;
}