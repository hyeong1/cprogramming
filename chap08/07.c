// 소득세 계산하는 함수 get_tax(int income) 작성하고 테스트
// 과표 구간은 1000만원 이하 8%, 1000만원 초과는 10%로 가정
#include <stdio.h>

int get_tax(int income);

int main()
{
    int income;
    printf("소득을 입력하시오(만원): ");
    scanf("%d", &income);

    printf("소득세는 %d입니다.\n", get_tax(income));

    return 0;
}

int get_tax(int income)
{
    if (income <= 1000) // 소득이 1000만원 이하면 소득 * 0.08 반환
        return (income * 0.08);
    else // 소득이 1000만원 초과면 1000만원까지는 *0.08, 1000만원 초과 금액은 *0.1 계산해서 두 결과를 더한 값 반환
        return ((1000 * 0.08) + ((income - 1000) * 0.1));
}