#include <stdio.h>  
#include <stdlib.h>  
  
menu()      //��ʾ������˵�  
{  
    printf("----------1.Add----------\n");  
    printf("----------2.Sub----------\n");  
    printf("----------3.Mul----------\n");  
    printf("----------4.Div----------\n");  
    printf("----------0.exit---------\n");  
}  
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
int main()  
{  
    int a = 0;  
    int b = 0;  
    int input = 1;  
    int ret = 0;  
    menu();  
    printf("��ѡ��Ҫִ�еļ���\n");  
    scanf("%d",&input);  
    printf("����������������\n");  
    scanf("%d%d",&a,&b);  
    switch(input)  
    {  
    case 1:  
        {  
            ret=Add(a,b);  
            printf("%d\n",ret);  
        }  
        break;  
    case 2:  
        {  
            ret=Sub(a,b);  
            printf("%d\n",ret);  
        }  
        break;  
    case 3:  
        {  
            ret=Mul(a,b);  
            printf("%d\n",ret);  
        }  
        break;  
    case 4:  
        {  
            ret=Div(a,b);  
            printf("%d\n",ret);  
        }  
        break;  
    case 0:  
        break;  
    default:  
        {  
            printf("ѡ��Ĳ�����֧��\n");  
        }  
        break;  
    }  
    return 0;  
}  