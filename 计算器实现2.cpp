#include <stdio.h>  
#include <stdlib.h>  
  
int Add(int num1,int num2)  
{  
    return num1+num2;  
}  
int Sub(int num1,int num2)  
{  
    return num1-num2;  
}  
int Mul(int num1,int num2)  
{  
    return num1*num2;  
}  
int Div(int num1,int num2)  
{  
    return num1/num2;  
}  
  
menu()      //��ʾ������˵�  
{  
    printf("----------1.Add----------\n");  
    printf("----------2.Sub----------\n");  
    printf("----------3.Mul----------\n");  
    printf("----------4.Div----------\n");  
    printf("----------0.exit---------\n");  
}  
void option(int (*option)(int , int))  
{  
    int num1 = 0;  
    int num2 = 0;  
    int ret = 0;  
    printf("����������������:\n");  
    scanf("%d%d", &num1, &num2);  
    ret = option(num1, num2);  
    printf("%d\n", ret);  
}  
int main()  
{  
    int (*pfunArr[5])(int , int) = {0, Add, Sub, Mul, Div};//ת�Ʊ�  
    int input = 1;  
    while(input)  
    {  
        menu();  
        printf("��ѡ��:\n");  
        scanf("%d", &input);  
        if(input>=1 && input<=4)  
        {             
            option(pfunArr[input]);  
        }  
        else if(input == 0)  
        {  
            break;  
        }  
        else  
        {  
            printf("ѡ��Ĳ�����֧��\n");  
        }  
    }  
    system("pause");  
    return 0;  
}  
