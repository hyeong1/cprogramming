// ox퀴즈
#include <stdio.h>
#include <string.h>

int main()
{
    int c, scoreSum, score;
    char resultOX[80];
    scanf("%d", &c);

    // 테스트 케이스 c번 반복
    for (int i = 0;i < c;i++)
    {
        scoreSum = 0; // 전체 점수 합할 변수
        score = 0; // 문자 하나의 점수를 저정할 변수
        scanf("%s", resultOX);
        int resultLen = strlen(resultOX); // 입력받은 ox결과의 총 길이-널값 제외한 문자열의 길이
        for (int i = 0;i < resultLen;i++) 
        {
            if (resultOX[i] == 'X') // X면 점수 0점  "",''
                score = 0;
            else if (resultOX[i] == 'O') // O면 점수 1점
            {   // 바로 score = 1;하지 않고 앞 문자 한 번 더 비교
                if (resultOX[i-1] == 'O') // 앞 문자도 O면 
                    score++; // score의 값을 증가
                else
                    score = 1; // 아니면 score = 1로 초기화
            }  
            scoreSum += score;
        }
        printf("%d\n", scoreSum);
    }
    return 0;    
}