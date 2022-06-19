#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int com, user;
    srand(time(NULL));
    com = rand() % 3 + 1;

    printf("선택하시오(1:가위 2:바위 3:보)");
    scanf("%d", &user);

    printf("%d\n", com);

    if (user == 1) {
        if (com == 1)
            printf("비김\n");
        else if (com == 2) 
            printf("사용자가 이김\n");
        else 
            printf("사용자가 이김\n");
    }
    else if (user == 2) {
        if (com == 1)
            printf("사용자가 이김\n");
        else if (com == 2) 
            printf("비김\n");
        else 
            printf("사용자가 짐\n");
    }
    else {
        if (com == 1)
            printf("사용자가 짐\n");
        else if (com == 2) 
            printf("사용자가 이김\n");
        else 
            printf("비김\n");
    }

    return 0;
}