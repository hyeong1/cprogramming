// 선택 정렬
#include <stdio.h>

int main()
{
    int list[10] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
    int box, least;
    for (int i = 0;i < 10;i++)
    {
        least = i; // 처음 최소값은 i(0) , 정렬된 요소는 제외
        for (int j = i + 1;j < 10;j++) // 처음 j값은 1 (i(0)+1)
        {
            if (list[j] < list[least]) // 배열 첫 번째 요소보다 작은 요소의 번지를 least에 저장
                least = j;
        }
        box = list[i]; 
        list[i] = list[least];
        list[least] = box;
    }
    for (int i = 0;i < 10;i++)
        printf("%d ", list[i]);
    printf("\n");
    return 0;
}