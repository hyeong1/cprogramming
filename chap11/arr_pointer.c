// 1차원 배열 포인터
// 포인터 사용해서 n개의 정수 중에서 최솟값과 최댓값 구하기
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int data[5] = {1, 2, 3, 4, 5};
    // int* pData = data;
    // for (int i = 0;i < 5;i++)
    //     printf("%d\n", *(pData+i));

    int input, max, min;
    int *data; //*pData
    scanf("%d", &input);

    data = (int *)calloc(sizeof(int), input); // malloc, calloc -> calloc쓰면 자동으로 0으로 초기화(calloc은 매개변수가 2개)/malloc은 초기화를 안해줘서 쓰레기값이 들어감
    for (int i = 0; i < input; i++)
        scanf("%d", &data[i]);

    // pData = data; // pData라는 포인터 변수에 data배열 넣기

    max = *data;
    min = *data;
    for (int i = 1; i < input; i++)
    {
        if (max < *(data + i))
            max = *(data + i);
        if (min > *(data + i))
            min = *(data + i);
    }
    printf("%d ", min);
    printf("%d\n", max);

    free(data); // malloc으로 할당된 메모리 비워주기
    return 0;
}