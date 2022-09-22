// 주사위를 던져서 각각의 면이 몇 번 나왔는지 출력하는 프로그램 작성
// 주사위의 면은 난수를 이용하여 생성
// 주사위를 던지는 함수 만들고 함수 안에서 각각의 면이 나올 떄마다 그 횟수를 정적 지역 변수를 이용하여 기억
// 위 함수의 호출 회수가 100이 되면 각 면의 횟수 출력
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GetDiceFace();

int main()
{
    srand(time(NULL));
    GetDiceFace();
    return 0;
}

void GetDiceFace()
{
    static int count = 0;
    static int count1 = 0;
    static int count2 = 0;
    static int count3 = 0;
    static int count4 = 0;
    static int count5 = 0;
    static int count6 = 0;
    
    do
    {
        count++;
        int dice = rand() % 6 + 1;
        if (dice == 1)
            count1++;
        else if (dice == 2)
            count2++;
        else if (dice == 3)
            count3++;
        else if (dice == 4)
            count4++;
        else if (dice == 5)
            count5++;
        else
            count6++;

    } while (count != 100);
    printf("1->%d\n", count1);
    printf("2->%d\n", count2);
    printf("3->%d\n", count3);
    printf("4->%d\n", count4);
    printf("5->%d\n", count5);
    printf("6->%d\n", count6);    
}