//直接交换
int main()  
{  
    int tmp=0;  
    int a=4;  
    int b=5;  
    tmp=a;  
    a=b;  
    b=tmp;  
    printf("a=%d\tb=%d\n",a,b);  
}  


//使用异或的形式
#include<stdio.h>  
int main()  
{  
    int a=4;  
    int b=5;  
    a=a^b;  
    b=a^b;  
    a=a^b;  
    printf("a=%d\tb=%d\n",a,b);  
} 

//使用指针的形式
#include<stdio.h>  
int main()  
{  
    int a=4;  
    int b=5;  
    int *p;  
    int *q;  
    p=&a;  
    q=&b;  
    //第一种实现  
    *p=*p^*q;  
    *q=*p^*q;  
    *p=*p^*q;  
    //第二种实现  
    *p=*p*(*q);  
    *q=*p/(*q);  
    *p=*p/(*q);  
    //第三中实现  
    *p=*p+*q;  
    *q=*p-*q;  
    *p=*p-*q;  
    printf("a=%d\tb=%d\n",a,b);  
}  

