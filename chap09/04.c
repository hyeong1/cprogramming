// 난수를 생성하여 반환하는 함수 GetRandom() 작성하고 테스트
// 정적 지역 변수 한 번만 초기화 하기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GetRandom();

int main()
{
    GetRandom();
    GetRandom();
    GetRandom();

    return 0;
}

void GetRandom()
{
    static int inited = 0;
    if (!inited)
    {   
        printf("초기화 실행\n");
        srand(time(NULL));
        inited++;
    }
    else
        printf("%d\n", rand());
}