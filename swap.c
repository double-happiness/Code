//ֱ�ӽ���
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


//ʹ��������ʽ
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

//ʹ��ָ�����ʽ
#include<stdio.h>  
int main()  
{  
    int a=4;  
    int b=5;  
    int *p;  
    int *q;  
    p=&a;  
    q=&b;  
    //��һ��ʵ��  
    *p=*p^*q;  
    *q=*p^*q;  
    *p=*p^*q;  
    //�ڶ���ʵ��  
    *p=*p*(*q);  
    *q=*p/(*q);  
    *p=*p/(*q);  
    //������ʵ��  
    *p=*p+*q;  
    *q=*p-*q;  
    *p=*p-*q;  
    printf("a=%d\tb=%d\n",a,b);  
}  

