#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintList(int list[]); // �迭 ��� �Լ�
void SelectionSort(int list[], int size); // �������� �Լ�
int BinarySearch(int list[], int size, int key); // ����Ž�� �Լ�

int main()
{
   int key, size;
   int list[16];
   size = 16;

   srand(time(NULL));
   for (int i = 0; i < 16; i++) // �迭�� ���� �ֱ�
      list[i] = rand() % 100;

   printf("���� ��: ");
   PrintList(list);
   SelectionSort(list, size);
   printf("���� ��: ");
   PrintList(list);

   printf("Ž���� ���� �Է��Ͻÿ�: ");
   scanf("%d", &key);
   printf("Ž�� ��� = %d\n", BinarySearch(list, size, key));

   return 0;   
}

void PrintList(int list[])
{
   for (int i = 0; i < 16; i++) // �迭 ���
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
   
   while (low <= high) // low�� �����ϰų� high�� ���� -> �ݺ��� low�� high���� �۰ų� ���� ������
   {
      printf("[%d %d]\n", low, high); // low, high�� ���
      middle = (low + high) / 2;
      if (key == list[middle])
         return middle;
      else if (key > list[middle]) // key���� �߰� ������ ũ�� key���� �߰� �� �����ʿ� ��ġ
         low = middle + 1; // low�� ����
      else // key���� �߰� ������ ������ key���� �߰� �� ���ʿ� ��ġ
         high = middle - 1; // high�� ����
   }
   return 0;
}