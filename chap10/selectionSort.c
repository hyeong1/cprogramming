// 선택정렬
// 배열 값 난수로 입력받아서 정렬하기 추가
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintArr(int list[], int size);
void RandArr(int list[], int size);
void SelectionSort(int list[], int size);

int main()
{
    int list[10];
    int size, temp, least;
    size = 10;
    srand(time(NULL));
    RandArr(list, size);
    // 정렬 전 배열 출력하기
    PrintArr(list, size);
    printf("\n");
    // 선택정렬 수행
    SelectionSort(list, size);
    // 정렬된 배열 출력하기
    PrintArr(list, size);
    return 0;
}

void PrintArr(int list[], int size)
{
    for (int i = 0;i < size;i++)
        printf("%d ", list[i]);
}

void RandArr(int list[], int size)
{
    for (int i = 0;i < size;i++)
        list[i] = rand() % 100;
}

void SelectionSort(int list[], int size)
{
    int least, temp;
    for (int i = 0;i < size-1;i++)
    {
        least = i; // least는 최솟값의 인덱스 -i번째를 최솟값이라 가정
        for (int j = i+1;j < size;j++) // i 바로 다음번째부터 비교하면서 최솟값 찾기
        {
            if (list[least] > list[j]) // 최소라고 생각한 요소보다 j번째 요소가 작으면
                least = j; // 최솟값 인덱스를 j로 교체
        }
        // 최솟값과 자리 교환
        temp = list[i]; // i번째 요소를 빈 변수에 저장
        list[i] = list[least]; // i 자리에는 최솟값 요소 저장
        list[least] = temp; // 최솟값이 있었던 자리에는 i번째에 있었던 요소 저장
    }
}