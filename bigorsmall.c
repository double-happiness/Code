#include<stdio.h>      //使用结构体
  
struct IsBit  
{  
    char ch;  
    int a;  
};  
  
int main()  
{  
    struct IsBit ret;  
    ret.ch = 1;  
    if (ret.ch == 1)  
    {  
        printf("当前机器是大端\n");  
    }  
    else  
    {  
        printf("当前机器是小端\n");  
    }  
    system("pause");  
    return 0;  
}

#include<stdio.h>  	//使用类型转换
  
int main()  
{  
    int a = 1;  
    char ch = a;  
    if (a == 1)  
    {  
        printf("当前机器是大端\n");  
    }  
    else  
    {  
        printf("当前机器是小端\n");  
    }  
    system("pause");  
    return 0;  
}