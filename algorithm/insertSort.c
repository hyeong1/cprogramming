// ���� ����-��������
#include <stdio.h>

int main()
{  
	int arr[10] = {9, 17, 5, 6, 124, 112, 1, 3, 87, 55};
	int length = sizeof(arr) / sizeof(int);

	int j;
	int temp;
	for(int i=1;i<length;i++) // �� ��ҿ� ���ϱ� ������ 1���� ����
	{
		temp = arr[i]; // temp�� ���� �� arr[i]����
		j = i-1;
		while(j>=0 && temp>arr[j]) // temp���� �� ��Һ��� ũ�� j���� ������ �ƴϸ�
		{
			arr[j+1] = arr[j]; // ���ϴ� ���� �� ��ҷ� �ű��
			j--;
		}
		arr[j+1] = temp; // while�� �� ���� temp�����ϰ� �� �Ű��� ���̹Ƿ� arr[i]�� temp�� �ֱ�
	}
	
	for(int i=0; i<length; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}