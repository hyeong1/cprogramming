#include <stdio.h>

int main() {
    double cm, inch, printInch;
    int pete;
    printf("Ű�� �Է��Ͻÿ�(cm): ");
    scanf("%lf", &cm);

    inch = cm / 2.54;
    pete = inch / 12;

    printInch = inch - (pete * 12); 

    printf("%.lfcm�� %d��Ʈ %lf��ġ�Դϴ�.", cm, pete, printInch);

    return 0;
}