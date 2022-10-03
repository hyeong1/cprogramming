// 사용자가 상품 번호를 입력하면 해당 물품의 주소 번호를 알려주는 프로그램 작성
// 상품 번호는 1부터 10까지, 주소 번호는 1부터 5
// 1차원 배열에 상품 번호마다 장소를 지정
#include <stdio.h>

int main()
{
    int address[10] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    int goods;
    printf("상품 번호 입력: ");
    scanf("%d", &goods);

    printf("상품 번호 %d의 위치는 %d입니다.\n", goods, address[goods-1]);
    return 0;
}