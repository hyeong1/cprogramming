#include <stdio.h>
#include <stdlib.h>

long long sum(int *a, int n) {
	long long ans = 0;
    for (int i = 0;i < n;i++)
        ans += (long long)a[i];
       
	return ans;
}

int main()
{
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0;i < n;i++)
        scanf("%d", &arr[i]);
        
    printf("%lld\n", sum(arr, n));
    return 0;
}
