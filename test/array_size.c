#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int size = sizeof(arr)/sizeof(int);

    printf("%d", size);
    return 0;
}