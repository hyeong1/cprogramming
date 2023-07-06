#include <stdio.h>
#include <string.h>

int main()
{
    char subject[50], grade[3];
    double totalCredit = 0, totalGrade = 0;

    for (int i = 0; i < 20; i++)
    {
        double currentCredit;
        scanf("%s %lf %s", subject, &currentCredit, grade);
        totalCredit += currentCredit;

        if (strcmp(grade, "A+") == 0)
            totalGrade += (currentCredit * 4.5);
        else if (strcmp(grade, "A0") == 0)
            totalGrade += (currentCredit * 4.0);
        else if (strcmp(grade, "B+") == 0)
            totalGrade += (currentCredit * 3.5);
        else if (strcmp(grade, "B0") == 0)
            totalGrade += (currentCredit * 3.0);
        else if (strcmp(grade, "C+") == 0)
            totalGrade += (currentCredit * 2.5);
        else if (strcmp(grade, "C0") == 0)
            totalGrade += (currentCredit * 2.0);
        else if (strcmp(grade, "D+") == 0)
            totalGrade += (currentCredit * 1.5);
        else if (strcmp(grade, "D0") == 0)
            totalGrade += (currentCredit * 1.0);
        else if (grade[0] == 'F')
            totalGrade += (currentCredit * 0.0);
        else if (grade[0] == 'P')
            totalCredit -= currentCredit; // 계산에서 제외
        subject[0] = '\0';
        grade[0] = '\0';
    }
    printf("%lf", totalGrade / totalCredit);

    return 0;
}