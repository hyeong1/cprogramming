#include <stdio.h>
#include <string.h> //strlen�Լ��� ���� �������

//���ڿ� ���� 4�� - ���ڿ� �󵵼� ����ϱ�

int str_chr(char* s, int c); //���ڿ� ���� count���ִ� �Լ�

int main(void)
{
    char arr_str[100]; //�Է¹��� ���ڿ�
    char count_c = 97; //����� �˰���� ����

    //���ڿ��� �Է¹޴� �Լ�
    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(arr_str);

    //���
    for(int i=0; i <26 ; i++) //���ĺ� ����
    {
        printf("%c: %d \n", (char)(i+97), str_chr(arr_str, count_c+i));
    }

    return 0;

}

int str_chr(char* s, int c)
{
    int count=0; //count_c�� �ϳ��� ���ö����� 1�� �������ֱ�

    for(int i=0; i <26 ; i++) //���ĺ� ����
    {
        if( s[i] == (char)c )
            count++;
    }
    return count;

}