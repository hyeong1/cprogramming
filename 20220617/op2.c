#include <stdio.h>

int main() {
    double cm, feet, inch;
    printf("Ű�� �Է��Ͻÿ�(cm): ");
    scanf("%lf", &cm);

    inch = cm / 2.54;
    feet = inch / 12;

    inch = inch - ((int)feet * 12);

    printf("%dcm�� %d��Ʈ %lf��ġ �Դϴ�.", (int)cm, (int)feet, inch);

    return 0;
}