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
  
menu()      //显示计算机菜单  
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
    printf("请输入两个操作数:\n");  
    scanf("%d%d", &num1, &num2);  
    ret = option(num1, num2);  
    printf("%d\n", ret);  
}  
int main()  
{  
    int (*pfunArr[5])(int , int) = {0, Add, Sub, Mul, Div};//转移表  
    int input = 1;  
    while(input)  
    {  
        menu();  
        printf("请选择:\n");  
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
            printf("选择的操作不支持\n");  
        }  
    }  
    system("pause");  
    return 0;  
}  
