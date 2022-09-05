// 회원 등급에 따라 권한 출력하기
// switch-case문 사용
// 3등급: 삭제/쓰기/읽기, 2등급: 쓰기/읽기, 1등급: 읽기
#include <stdio.h>

int main() {
    int class;
    printf("당신의 회원등급을 입력해주세요: ");
    scanf("%d", &class);

    switch (class) // 판단할 값
    {
    case 1: // 판단할 값이 1이면 case1 실행-> case2 실행-> case3 실행 이지만 break;가 있으므로 case1만 수행하고 끝남.
        printf("읽기 권한 부여\n");
        break;
    case 2:
        printf("쓰기 권한 부여\n읽기 권한 부여\n");
        break;
    case 3:
        printf("삭제 권한 부여\n쓰기 권한 부여\n읽기 권한 부여\n");
        break;
    
    default:
        break;
    }

    return 0;
}