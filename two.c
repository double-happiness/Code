#include<stdio.h>  
int main()  
{  
    int a=2;  
    int sum=0;  
    int i=0;  
    for(i=0; i<5; i++)  
    {  
        sum=sum+a;  
        a=a*10+2;  
    }  
    printf("%d\n",sum);  
    return 0;  
}  