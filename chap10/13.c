// 10진수를 2진수로 변환하여 출력하는 프로그램
// 최대 32자리까지 변환이 가능
// 10진수를 2로 나누어서 생성된 나머지를 역순으로 나타내면 2진수로 표현할 수 있다.
#include <stdio.h>

int DecToBin(int binary[], int dec); // 10진수를 2진수로 바꿔주는 함수

int main()
{
    int binary[32];
    int decimal, size;
    scanf("%d", &decimal);
    size = DecToBin(binary, decimal) - 1;

    printf("%d -> ", decimal);
    for (int i = size;i >= 0;i--)
       printf("%d", binary[i]);
    printf("\n");
    
    return 0;
}

int DecToBin(int binary[], int dec)
{
    int i;
    for (i = 0;i < 32 && dec > 0;i++)
    {
        binary[i] = dec % 2;
        dec = dec / 2;
    }
    return i; // i가 저장된 마지막 배열 요소의 인덱스-1
}