// 삽입 정렬-내림차순
#include <stdio.h>

int main()
{  
	int arr[10] = {9, 17, 5, 6, 124, 112, 1, 3, 87, 55};
	int length = sizeof(arr) / sizeof(int);

	int j;
	int temp;
	for(int i=1;i<length;i++) // 앞 요소와 비교하기 때문에 1부터 시작
	{
		temp = arr[i]; // temp에 비교할 값 arr[i]저장
		j = i-1;
		while(j>=0 && temp>arr[j]) // temp값이 앞 요소보다 크고 j값이 음수가 아니면
		{
			arr[j+1] = arr[j]; // 비교하는 값을 앞 요소로 옮기기
			j--;
		}
		arr[j+1] = temp; // while문 다 돌면 temp제외하고 다 옮겨진 것이므로 arr[i]에 temp값 넣기
	}
	
	for(int i=0; i<length; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}