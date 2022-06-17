#include <stdio.h>

int main() {
    double cm, feet, inch;
    printf("키를 입력하시오(cm): ");
    scanf("%lf", &cm);

    inch = cm / 2.54;
    feet = inch / 12;

    inch = inch - ((int)feet * 12);

    printf("%dcm는 %d피트 %lf인치 입니다.", (int)cm, (int)feet, inch);

    return 0;
}