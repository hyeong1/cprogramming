#include <stdio.h>

// �Ǻ���ġ ����
int main() {
    int input, a, b, c;
    a = 0;
    b = 1;
    
    printf("���° �ױ��� ���ұ��? ");
    scanf("%d", &input);

    printf("%d ", a);
    for (int i = 1;i < input;i++) {
        c = a + b;  
        a = b;
        b = c;  
        printf("%d ", c);
    }

    return 0;
}