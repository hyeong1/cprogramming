#include <stdio.h>

double calculator(int select, int num1, int num2) {
    double result;
    
    if (select == 1) {
        result = num1 + num2;
    }
    else if (select == 2) {
        result = num1 - num2;
    }
    else if (select == 3) {
        result = num1 / num2;
    }
    else {
        result = num1 * num2;
    }

    return result;
}

int main() {
    int select;
    double num1, num2;

    printf("¼öÇàÇÒ ¿¬»êÀ» ¼±ÅÃÇÏ¼¼¿ä. 1.µ¡¼À 2.»¬¼À 3.³ª´°¼À 4.°ö¼À\n");
    scanf("%d", &select);

    printf("¿¬»êÇÒ µÎ ¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
    scanf("%lf %lf", &num1, &num2);

    printf("¿¬»ê °á°ú: %lf", calculator(select, num1, num2));

    return 0;
}