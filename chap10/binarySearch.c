// 이진탐색
#include <stdio.h>

int BinarySearch(int list[], int size, int k);
int main()
{
    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size, k;
    size = sizeof(list) / sizeof(list[0]); // 배열 크기 변수
    printf("찾을 숫자: ");
    scanf("%d", &k);
    if (k > 10)
        printf("해당 숫자는 배열에 없습니다.\n");
    else
        printf("해당 숫자는 %d번째에 있습니다.\n", BinarySearch(list, size, k) + 1);
    
    return 0;
}

int BinarySearch(int list[], int size, int k)
{
    int low, high, middle;
    low = 0;
    high = size-1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (k == list[middle]) // 배열 중간 요소랑 찾으려는 숫자랑 같으면
            return middle;
        else if (k > list[middle]) // k가 배열 중간 요소보다 크면
            low = middle + 1; // 중간요소 기준 앞 배열은 버리고 뒤 배열이랑만 비교하기 위해서 low값을 middle+1로 교체
        else // k가 배열 중간 요소보다 작으면
            high = middle - 1; // 중간요소 기준 앞 배열하고만 비교할 것이기 때문에 끝 배열 번호를 middle-1로 교체
    }
    return 0;
}