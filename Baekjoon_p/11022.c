#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, num1, num2;
    int* add = (int*)malloc(sizeof(int) * t);
    int* num1A = (int*)malloc(sizeof(int) * t);
    int* num2A = (int*)malloc(sizeof(int) * t);
    scanf("%d", &t);
    
    for (int i = 0;i < t;i++)
    {
        scanf("%d %d", &num1, &num2);
        num1A[i] = num1;
        num2A[i] = num2;
        add[i] = num1 + num2;
    }
    for (int i = 0;i < t;i++)
    {
        printf("Case #%d: %d + %d = %d\n", i+1, num1A[i], num2A[i], add[i]);  
    }
        
    return 0;
}