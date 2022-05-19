#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int i;
    i = rand() % 3;
    printf("%d", i);

    return 0;
}