// 가장 많이 사용된 알파벳 대문자로 출력 (비교할때는 대소문자 구분x)
#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000000] = {'\0'};                                             // 널 값으로 초기화
    int alphabet[26] = {0}, size, big, small, index, max, maxIndex, overlap; // 알파벳 빈도수 체크할 배열 - 0으로 초기화
    scanf("%s", &word);

    size = strlen(word); // 입력받은 문자열의 길이
    // 단어 배열 돌면서 각 알파벳 빈도수 체크 - A부터 검사 (아스키코드 65번)-alphbet배열 0번부터 ++;
    // 비교할 때 A=65, a=97로 시작해서 아니면 둘다 ++, 맞으면 해당 alphbet 배열 인덱스 값++하고 break;
    for (int i = 0; i < size; i++) // 입력받은 문자열의 길이만큼 총 반복
    {
        index = 0;              // alphbet 인덱스
        big = 65;               // 대문자 아스키코드 변수
        small = 97;             // 소문자 아스키코드 변수
        while (word[i] != '\0') // 문자가 널값이 아닐동안 반복
        {
            if ((int)word[i] == big || (int)word[i] == small) // 대문자 또는 소문자 아스키코드랑 같으면(대소문자 구분x)
            {
                alphabet[index]++; // alphbet의 해당 인덱스 증가시키고
                break;             // while문 나가기
            }
            else
            {
                big++;
                small++;
                index++;
            }
        }
    }
    // alphbet 배열 출력
    // for (int i = 0; i < 26; i++)
    //    printf("%d ", alphabet[i]);

    // 빈도수 제일 많은 알파벳이 1개일 때 - 대문자로 출력
    // 배열에서 최댓값 찾는 코드 이용
    max = alphabet[0]; // 최댓값을 alphabet[0]이라 가정
    maxIndex = 0;      // 최댓값 인덱스
    overlap = -1;      // 중복값 인덱스
    for (int i = 1; i < 26; i++)
    {
        if (max < alphabet[i]) // 가장 많이 쓰인 알파벳 찾기 - 배열에서 최댓값 찾는 코드
        {
            max = alphabet[i];
            maxIndex = i;
        }
        // 중복인덱스 추가해서
        else if (max == alphabet[i]) // 최댓값이랑 값이 같으면
            overlap = i;             // 중복인덱스에 i값 저장
    }
    // 결과 출력
    if (overlap < 0) // 중복값 인덱스가 음수면 중복 값 없으므로
        printf("%c", maxIndex + 65);
    else if (alphabet[maxIndex] > alphabet[overlap]) // 중복값 인덱스가 음수가 아니면 중복값 존재 -> max값이랑 비교
        printf("%c", maxIndex + 65);                 // 최댓값 인덱스에 65더해서 대문자로 출력
    // max값이랑 같은 값이 하나이상 존재하면 '?' 출력
    else             // 중복인덱스 값보다 최댓값인덱스 값이 작거나 같으면
        printf("?"); // ? 출력

    return 0;
}