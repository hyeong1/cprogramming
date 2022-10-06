#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintList(int list[]); // 배열 출력 함수
void SelectionSort(int list[], int size); // 선택정렬 함수
int BinarySearch(int list[], int size, int key); // 이진탐색 함수

int main()
{
   int key, size;
   int list[16];
   size = 16;

   srand(time(NULL));
   for (int i = 0; i < 16; i++) // 배열에 난수 넣기
      list[i] = rand() % 100;

   printf("정렬 전: ");
   PrintList(list);
   SelectionSort(list, size);
   printf("정렬 후: ");
   PrintList(list);

   printf("탐색할 값을 입력하시오: ");
   scanf("%d", &key);
   printf("탐색 결과 = %d\n", BinarySearch(list, size, key));

   return 0;   
}

void PrintList(int list[])
{
   for (int i = 0; i < 16; i++) // 배열 출력
      printf("%d ", list[i]);
   printf("\n");
}

void SelectionSort(int list[], int size)
{
   int least, temp;
   
   for (int i = 0; i < size - 1; i++)
   {
      least = i; 
      for (int j = i + 1; j < size; j++) 
      {
         if (list[least] > list[j]) 
            least = j; 
      }
      temp = list[i];
      list[i] = list[least]; 
      list[least] = temp; 
   }
}

int BinarySearch(int list[], int size, int key)
{
   int low, high, middle;
   low = 0;
   high = size - 1;
   
   while (low <= high) // low가 증가하거나 high가 감소 -> 반복은 low가 high보다 작거나 같을 때까지
   {
      printf("[%d %d]\n", low, high); // low, high값 출력
      middle = (low + high) / 2;
      if (key == list[middle])
         return middle;
      else if (key > list[middle]) // key값이 중간 값보다 크면 key값은 중간 값 오른쪽에 위치
         low = middle + 1; // low값 변경
      else // key값이 중간 값보다 작으면 key값은 중간 값 왼쪽에 위치
         high = middle - 1; // high값 변경
   }
   return 0;
}