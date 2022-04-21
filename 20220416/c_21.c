#include <stdio.h>

int main() {
    int x = 0x1c, y = 0xe;
    int z;
    z = x >> 2 | y;
    printf("Z = %x\n", ++z);
    z = ~ x & y << 4;
    printf("z = %x\n", --z);
    
    return 0;
}