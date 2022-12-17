// 사용자로부터 받은 주소록을 저장하고 출력하는 프로그램
// 사용자로부터 먼저 주소의 개수를 입력 받음
// 주소의 많은 정보중에서 이름과 휴대폰 번호만 저장
#include <stdio.h>
#include <stdlib.h>

typedef struct adderss
{
    char name[20];
    char phone[100];
} ADDERSS;

int main()
{
    int size; // 주소의 개수
    ADDERSS *list;
    
    // 주소의 개수 입력 받기
    printf("주소의 개수: ");
    scanf("%d", &size);

    // 주소의 개수만큼 구조체 배열 동적 할당
    list = (ADDERSS*)malloc(size * sizeof(ADDERSS));

    // 주소 정보 입력
    for (int i = 0;i < size;i++)
    {
        printf("이름을 입력하시오: ");
        scanf("%s", list[i].name);
        printf("휴대폰 번호를 입력하시오: ");
        scanf("%s", list[i].phone);
    }

    // 정보 출력
    printf("========================================\n");
    printf("이름\t\t휴대폰 번호\n");
    printf("========================================\n");
    for (int i = 0;i < size;i++)
        printf("%s\t\t%s\n", list[i].name, list[i].phone);
    printf("========================================\n");

    return 0;
}