#include <stdio.h>

int main()
{
    int H, M;
    printf("�ð��� �Է��ϼ���(24�ð�): ");
    scanf("%d %d", &H, &M);

    // �ð��� 0���� �־��� ��
    if (H == 0 && (M - 45) == 0){
        M = M - 45;
        printf("%d %d", H, M);
    }
    else if (H == 0){
        H = 24;
        if (M - 45 < 0){
        H = H - 1;
        M = (M + 60) - 45;
        printf("%d %d", H, M);
        }
        else{
            M = M - 45;
            printf("%d %d", H, M);
        }
    }
    // �ð��� 0�� �ƴ� �������� ��
    else if (M - 45 < 0){
        H = H - 1;
        M = (M + 60) - 45;
        printf("%d %d", H, M);
    }
    else{
        M = M - 45;
        printf("%d %d", H, M);
    }

    return 0;
}