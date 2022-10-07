// 포인터로 버블정렬 함수 만들기
#include <stdio.h>

void bubbleSort(int *arr) // 버블정렬 함수
{
	int temp;	
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			if(arr[j] > arr[j+1]) // 오름차순
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main()
{
	int arr[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}

	bubbleSort(arr);

	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}