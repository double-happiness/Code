#include<stdio.h>      //ʹ�ýṹ��
  
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
        printf("��ǰ�����Ǵ��\n");  
    }  
    else  
    {  
        printf("��ǰ������С��\n");  
    }  
    system("pause");  
    return 0;  
}

#include<stdio.h>  	//ʹ������ת��
  
int main()  
{  
    int a = 1;  
    char ch = a;  
    if (a == 1)  
    {  
        printf("��ǰ�����Ǵ��\n");  
    }  
    else  
    {  
        printf("��ǰ������С��\n");  
    }  
    system("pause");  
    return 0;  
}