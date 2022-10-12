// 셀프넘버 출력하기
#include <stdio.h>

void FindSelfNumber(int *arr);

int main()
{
    int selfNum[10001] = {0};

    FindSelfNumber(selfNum);

    // 셀프넘버 검사 후 출력
    for (int i = 1;i < 10001;i++)
    {
        if (selfNum[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}

void FindSelfNumber(int *arr)
{
    int index;
    for (int i = 1;i <= 10000;i++)
    {
        if (i < 10) // 한 자리수
        {
            index = i + i;
            arr[index]++;
        }
        else if (i < 100) // 두 자리수
        {
            index = i + i/10 + i%10;
            arr[index]++;
        }
        else if (i < 1000) // 3자리수
        {
            index = i+ i/100 + (i%100)/10 + (i%100)%10;
            arr[index]++;
        }
        else // 네 자리수
        {
            index = i + i/1000 + (i%1000)/100 + ((i%1000)%100)/10 + ((i%1000)%100)%10;
            if (index <= 10000) // d(i)의 값이 10000보다 작거나 같으면
                arr[index]++; // selfNum 배열 인덱스 ++;
        }
    }
}