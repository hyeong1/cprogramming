// 학생들의 평점이 4.3점 만점일 때, 학생들의 학점을 100점 만점으로 변환하여 scores[]에 저장하는 함수를 작성
#include <stdio.h>

void PrintArr(double *arr, int size);
void convert(double *grades, double *scores, int size);

int main()
{
    double grades[10] = {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3};
    double scores[10] = {0};

    PrintArr(grades, 10);
    convert(grades, scores, 10);
    printf("\n");
    PrintArr(scores, 10);

    return 0;
}

void PrintArr(double *arr, int size) // 배열 출력함수
{
    for (int i = 0; i < size; i++)
        printf("%.2lf ", arr[i]);
}
void convert(double *grades, double *scores, int size)
{
    for (int i = 0; i < size; i++)
        scores[i] = (100 / 4.3) * grades[i]; // 100:4.3 = x:y -> x:scores[] 요소, y:grades[]요소
}