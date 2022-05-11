#include <stdio.h>

int main() {
    double cm, inch, printInch;
    int pete;
    printf("키를 입력하시오(cm): ");
    scanf("%lf", &cm);

    inch = cm / 2.54;
    pete = inch / 12;

    printInch = inch - (pete * 12); 

    printf("%.lfcm는 %d피트 %lf인치입니다.", cm, pete, printInch);

    return 0;
}