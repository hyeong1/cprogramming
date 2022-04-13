#include <stdio.h>

int main()
{
    //경보음이 울린 후에 메세지를 출력하고 다시 경보음이 울리는 프로그램
    // '\a'

    char beep = '\a';
    printf("화재가 발생하였습니다.%c", beep);

    return 0;
}
