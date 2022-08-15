// 입력한 문자열이 회문인지 검사하는 프로그램
// 횟수 제한 없음. 단, 'end'입력 시 프로그램 종료
// 입력함수와 회문검사함수 만들 것
#include <stdio.h>
#include <string.h>

void inputData(char *ap); 
int checkStr(char *ap);

int main() {
    char inputStr[100];
    int result; // 회문 검사결과를 저장하는 변수

    // 회문검사 반복문
    while (1) {
        inputData(inputStr);

        // 입력받은 문자열이 'end'인지 검사
        char checkEnd = strcmp(inputStr, "end");
        if (!checkEnd) // checkEnd == 0
            break;
        else {
            result = checkStr(inputStr);
            if (!result) //result값이 0이면 회문 맞음
                printf("회문 맞음\n");
            else  // result 값이 0이 아니면 회문 아님
                printf("회문 아님\n");
        }    
    }

    return 0;
}

// 입력함수
void inputData(char *ap) {
    printf("단어 입력: ");
    scanf("%s", ap);
    /*
    // 입력한 문자열 길이 구하기
    int n = strlen(str);
    
    // 입력한 문자열을 inputStr 문자열에 넣기
    for (int i = 0;i <= n;i++)
        ap[i] = str[i];
    */
   return;
}
// 회문검사함수
int checkStr(char *ap) {
    int len = strlen(ap); // inputStr의 총 길이를 저장하는 변수
    int check = 0; // 회문 아니면 +1
    for (int i = 0;i <= len / 2;i++) {
        if (ap[i] != ap[len-1-i]) {
            check += 1;
            break;
        } 
    }
    return check;
}