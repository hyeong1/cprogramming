// 입력한 문자열이 회문인지 검사하는 프로그램
// 횟수 제한 없음. 단, 'end'입력 시 프로그램 종료
// 입력함수와 회문검사함수 만들 것
#include <stdio.h>
#include <string.h>

void inputData(char *ap); 
void checkStr(char *ap);

int main() {
    char inputStr[100];
    inputData(inputStr);
    
    // 회문검사 반복문
    while (1) {
        // 입력받은 문자열이 'end'인지 검사
        char checkEnd = strcmp(inputStr, "end");
        if (!checkEnd)
            break;
        else
            checkStr(inputStr);
            break;
    }

    return 0;
}

// 입력함수
void inputData(char *ap) {
    char str[100];
    printf("단어 입력: ");
    scanf("%s", str);
    
    // 입력한 문자열 길이 구하기
    int n = strlen(str);
    
    // 입력한 문자열을 inputStr 문자열에 넣기
    for (int i = 0;i <= n;i++)
        ap[i] = str[i];
}
// 회문검사함수
void checkStr(char *ap) {
    // inputStr의 총 길이를 저장하는 변수
    int len = strlen(ap);
    // 회문 아니면 +1
    int check = 0;
    for (int i = 0;i <= len / 2;i++) {
        if (ap[i] == ap[len-1]) {
            len -= 1;
        }
        else {
            printf("회문 아님\n");
            check += 1;
            break;
        }
    }
    // 반복문을 다 돌았으면 회문. check == 0이면 '회문 맞음' 출력
    if (!check)
        printf("회문 맞음\n");
}