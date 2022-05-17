#include <stdio.h>

int main() {
    for (int i = 100;i > 0;i--) {
        /*if (i % 3 == 0) {
            if (i % 5 == 0) {
                printf("\"%d\"\n", i);
            }
            else {
                printf("%d\n", i);
            }
        }
        else if (i % 5 == 0) {
            if (i % 3 == 0) {
                printf("\"%d\"\n", i);
            }
            else {
                printf("%d\n", i);
            }
        }
        else {
            continue;
        }*/

        if (i % 3 == 0 && i % 5 == 0) {
            printf("\"%d\" ", i);
        }
        else if (i % 3 == 0 || i % 5 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}