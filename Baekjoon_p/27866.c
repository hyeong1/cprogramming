#include <stdio.h>

int main() {
    char s[1000];
    int idx;
    scanf("%s", s);
    scanf("%d", &idx);
    
    printf("%c", s[idx-1]);
    
    return 0;
}