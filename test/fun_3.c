// 임대료, 재산세, 보험료, 급여 등 고정 비용 A 만원
// 재료비, 인건비 등 가변 비용 B 만원
// 노트북 가격 C 만원
// 총 수입(판매비용) > 총 비용(고정 비용 + 가변 비용) --> 최초 지점: 손익분기점
// A, B, C가 주어졌을 떄, 손익분기점을 구하는 프로그램 함수로 작성
#include <stdio.h>
int findBEP(int A, int B, int C);

int main()
{
    int A, B, C;
    printf("고정비용, 가변비용, 가격 입력: ");
    scanf("%d %d %d", &A, &B, &C);

    printf("%d\n", findBEP(A, B, C));

    return 0;
}

int findBEP(int A, int B, int C)
{
    int cost, income, sell; // 총 비용, 총 수입, 판매 개수 변수 선언
    sell = 0;

    if (B >= C) // 손익분기점이 존재하지 않으면 -1 출력
        return -1;
    else
    {
        do
        {
            cost = A + (B * sell);
            income = C * sell;
            
            sell++; // sell 하나씩 늘리면서 cost, income 계산
        } while (cost > income); // cost < income을 만족하면 반복문 종료하고 sell값 리턴
    }

    return sell;
}