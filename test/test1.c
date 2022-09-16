#include <stdio.h>

void insertHead(int *ap, int size);
void insertBottom(int *ap, int size);

int main()
{
    
    int input, size;
    int head[100];
    int bottom[100];
   
    size = 100;

    printf("번호 입력: ");
    scanf("%d", &input);
 
    insertHead(head, size);
    insertBottom(bottom, size);

    printf("%d/%d\n", head[input-1], bottom[input-1]);
      
    
    //1, 1, 2, 3, 2, 1, 1, 2, 3, 4, 5, 4, 3, 2, 1 출력
   
    //1, 2, 1, 1, 2, 3, 4, 3, 2, 1, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 출력
    
    return 0;
}

void insertHead(int *ap, int size)
{
    int insideN, placeN; 
    insideN = 1;  // 배열에 들어가는 변수
    placeN = 0;   // 배열의 주소 변수
    for (int i = 0;i < 10;i++)
    {
        for (int j = 1;j <= insideN;j++)
        {
            ap[placeN] = j;
            placeN++;
        } 
        insideN++;
    }
}

void insertBottom(int *ap, int size)
{
    int insideN, placeN;
    insideN = 1;  // 배열에 들어가는 변수
    placeN = 0;   // 배열의 주소 변수
    for (int i = 0;i < 10;i++)
    {
        for (int j = insideN;j >= 1;j--)
        {
            ap[placeN] = j;
            placeN++;
        } 
        insideN++;
    }
}