#include <stdio.h>

int main() {
    // 학교 1, 2, 3, 4, 5 - 학교마다 반은 8개, 반마다 학생은 30명
    // 1학교 7반 17번이면 안준효
    // 2학교 1반 22번이면 마스크
    // 3학교 3반 3번이면 삼삼삼
    // 4학교 1반 11번이면 사오정
    // 5학교 8반 15번이면 박유진
    // 위 조건이 아는 다른 학교, 반, 번호면 '모르는 사람입니다.' 출력

    int schoolSize, classSize, numberSize;
    printf("학교, 반, 번호: ");
    scanf("%d %d %d", &schoolSize, &classSize, &numberSize);

    // 1학교
    if (schoolSize == 1){
        if (classSize == 7) {
            if (numberSize == 17) {
                printf("안준효");
            }
            else {
            printf("모르는 사람입니다.");
        }
        }
        else {
            printf("모르는 사람입니다.");
        }
    }
    // 2학교
    else if (schoolSize == 2) {
        if (classSize == 1) {
            if (numberSize == 22) {
                printf("마스크");
            }
            else {
            printf("모르는 사람입니다.");
        }
        }
        else {
            printf("모르는 사람입니다.");
        }
    }
    // 3학교
    else if (schoolSize == 3) {
        if (classSize == 3) {
            if (numberSize == 3) {
                printf("삼삼삼");
            }
            else {
            printf("모르는 사람입니다.");
        }
        }
        else {
            printf("모르는 사람입니다.");
        }
    }
    // 4학교
    else if (schoolSize == 4) {
        if (classSize == 1) {
            if (numberSize == 11) {
                printf("사오정");
            }
            else {
            printf("모르는 사람입니다.");
        }
        }
        else {
            printf("모르는 사람입니다.");
        }
    }
    //5학교
    else {
        if (classSize == 8) {
            if (numberSize == 15) {
                printf("박유진");
            }
            else {
            printf("모르는 사람입니다.");
        }
        }
        else {
            printf("모르는 사람입니다.");
        }
    }

    return 0;
}