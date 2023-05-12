#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* t, const char* p);

int main() {
    printf("%d\n", solution("1221351118575141528544", "12511"));
    return 0;
}

int solution(const char* t, const char* p) {
    int answer = 0;
    int indexT; // 문자열 t의 인덱스
    char* numT = (char*)malloc(sizeof(char) * strlen(p));
    
    for (int i = 0;i < strlen(t);i++) {
        indexT = i;
        for (int j = 0;j < strlen(p);j++)
            numT[j] = t[indexT++];

        printf("%d\n", atoi(numT));

        if (atoi(numT) <= atoi(p))
            answer++;

        if (indexT == strlen(t))
            break;
    }
    
    return answer;
}