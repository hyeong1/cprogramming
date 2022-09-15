// 설탕 Nkg배달 - 5kg, 3kg 설탕봉지 최대한 적은 개수 배달
#include <stdio.h>

int findSugarBag(int sugarN);

int main()
{
    int sugarN, sugar5, sugar3, sugarBag; // 입력받는 변수, 5kg/3kg 봉지 변수, 총 봉지 개수 변수
    sugar5 = 5;
    sugar3 = 3;

    printf("배달할 설탕 kg: ");
    scanf("%d", &sugarN);

    sugarBag = findSugarBag(sugarN);
    printf("%d\n", sugarBag);

    return 0;
}

int findSugarBag(int sugarN)
{
    int result = 0;

    if ((sugarN / 5) == 0 || (sugarN / 3) == 0) // 정확하게 Nkg 만들 수 없을 때
        return -1;
    else
    {
        if ((sugarN % 5) % 3 == 0) // Nkg % 5가 3의 배수일 때
        {
            result += (sugarN / 5);
            result += ((sugarN % 5) / 3);
        }
        else // Nkg % 5가 3의 배수가 아니면 5로 나누지 않고 바로 3으로 나눔
            result += (sugarN / 3);
        return result;
    }
}