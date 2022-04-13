#include <stdio.h>

int main()
{
    //평을 제곱미터로 환산하는 프로그램
    //1평 = 3.3m^2
    //기호 상수를 이용하여 1평당 제곱미터를 나타내어라
    const double SQMETER_PER_PYEONG = 3.3058;
    double pyeong, sqmeter;

    printf("평을 입력하세요: ");
    scanf("%lf", &pyeong);

    sqmeter = pyeong * SQMETER_PER_PYEONG;

    printf("%lf평방미터입니다.", sqmeter);

    return 0;
}