#include<stdio.h>  
int DigitSum(unsigned int n)    
{    
    unsigned int sum=0;    
    int m=0;    
    if(n!=0)    
    {    
        m=n%10;    
        n=n/10;    
        sum=m+DigitSum(n);    
    }    
    return sum;    
}   
int main ()    
{    
    int a=0;   
    int ret=0;  
    scanf("%u",&a);  
    ret=DigitSum(a);  
    printf("%u",ret);    
    return 0;    
}   