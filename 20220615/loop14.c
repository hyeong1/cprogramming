#include <stdio.h>

// ������ �Է¹޾� �ڸ����� �ݴ�� ����ϴ� ���α׷�
int main() {
    int input;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &input);

    /*do  --> �ϴ� �����ϰ� while���� Ȯ�� -> ���̸� �ٽ� �ݺ� �����̸� ����
    {
        printf("%d%d", input % 10, input / 10);
        break;
    } while (input >= 10);

    do
    {
        printf("%d%d%d", input % 100, (input / 10) % 10, input / 100);
        break;
    } while (input >= 100);

    do
    {
        
    } while (input >= 1000);*/

    while (1) {
        if (input >= 10 && input < 100) {
            printf("%d%d", input % 10, input / 10);
            break;
        }
        else if (input >= 100 && input < 1000) {
            printf("%d%d%d", input % 100, (input / 10) % 10, input / 100);
            break;
        }
    }
    
    
    

    return 0;
}